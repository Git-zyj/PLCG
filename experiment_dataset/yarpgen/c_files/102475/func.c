/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102475
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 -= ((/* implicit */short) ((long long int) var_0));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((long long int) 9303106915417861821ULL)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((((/* implicit */int) max((((/* implicit */short) arr_6 [i_0] [i_0])), ((short)-19089)))) + (2147483647))) << (((((/* implicit */int) (short)12610)) - (12610))))) - (((/* implicit */int) ((unsigned char) ((9303106915417861821ULL) << (((((/* implicit */int) arr_5 [i_0])) - (34796))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 9143637158291689789ULL))))) >> ((((-(4128768U))) - (4290838517U)))));
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_3]), (((/* implicit */unsigned short) (unsigned char)217)))))) : ((~(var_0)))))) && (((/* implicit */_Bool) var_3))));
                        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(9143637158291689795ULL)))) ? ((-(((/* implicit */int) (unsigned char)124)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19088))) & (3992235280U)))) ? ((~(-1596824581))) : (((((/* implicit */int) arr_3 [i_3] [i_1])) & (((/* implicit */int) (short)20280))))))));
                        arr_12 [i_1] [4U] [i_1] [i_2] [i_2] = 3818710536U;
                        var_20 = ((/* implicit */short) arr_2 [i_3]);
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0] [8] [i_4] [i_2] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2677613338U)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_2)))))))) ? ((-(9303106915417861817ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) % (arr_10 [i_4] [i_4] [i_2] [i_1] [i_0]))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_14 [i_4] [i_1] [i_0] [i_0] [i_4]))))))));
                    }
                    var_23 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)480)) ? (((952125113U) - (((/* implicit */unsigned int) 8386560)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_9 [i_0] [i_1] [(short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    var_24 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2016))) + (arr_0 [i_1])))));
                    var_25 = ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-19089))));
                }
            } 
        } 
    } 
    var_26 ^= ((/* implicit */short) var_8);
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)124))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) (_Bool)1)))))));
}
