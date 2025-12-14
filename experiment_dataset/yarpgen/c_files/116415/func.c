/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116415
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (short)1603))))) / ((-(-8039619048702581370LL)))))) ? (((/* implicit */int) var_2)) : (min((((((/* implicit */_Bool) 4294967295ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_10)) / (((/* implicit */int) (short)(-32767 - 1)))))))));
    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) / (((/* implicit */int) (signed char)68))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_2)))))))) ? (((/* implicit */int) ((signed char) min((3191907990U), (((/* implicit */unsigned int) var_11)))))) : (((((/* implicit */int) ((short) (short)-1))) * (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */int) (_Bool)1);
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((unsigned int) arr_4 [i_2]))));
                    var_14 = ((/* implicit */unsigned short) var_1);
                    arr_11 [i_2] [(unsigned char)6] [i_2] = ((/* implicit */_Bool) -9104535300400492596LL);
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0]))));
            arr_14 [i_0] [i_3 + 3] = ((/* implicit */long long int) arr_8 [i_3] [i_3 + 2] [i_3] [i_3]);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_10))) & ((~(((/* implicit */int) var_10))))));
                var_18 = ((/* implicit */unsigned short) (+(var_1)));
                arr_17 [i_4] [i_3 + 3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 4] [i_3 + 3] [i_3 + 1]))));
                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 + 2] [i_3 - 1])) ? (((/* implicit */int) arr_6 [i_3 + 3])) : (((/* implicit */int) (_Bool)0))));
            }
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_13 [i_0] [i_5])) : (((/* implicit */int) var_2)))))));
            var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_5])) ? ((~(3457862859U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (signed char)-46)) : ((-(((/* implicit */int) arr_16 [i_0]))))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) var_9))));
            var_24 = (~(18410715276690587648ULL));
        }
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_25 *= ((/* implicit */unsigned char) arr_15 [i_0] [i_6] [i_0] [i_0]);
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)4))))) ? (((unsigned long long int) (unsigned short)1819)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0])))));
            var_27 += ((/* implicit */short) arr_12 [i_6]);
            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 5833644909086105702LL)) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [i_0])))));
        }
    }
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(-2746802214321643295LL))), (((/* implicit */long long int) -704360875))))) && (((/* implicit */_Bool) var_3))));
}
