/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12273
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
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_14)))), ((-(((/* implicit */int) ((var_0) == (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((_Bool) max((arr_1 [i_0 - 1]), (arr_0 [i_0 + 3]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned short)52663))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) 5244891206774746221ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16255))) : (3826384059845352780LL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_4 + 1] = ((/* implicit */short) (unsigned short)16250);
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) (unsigned char)180))) ? (max((var_0), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 13201852866934805395ULL)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (unsigned short)46577)))))) == (((((/* implicit */_Bool) arr_10 [i_0 + 2] [(short)16] [(short)1] [i_3] [i_4 + 1] [(short)16] [i_4 + 1])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_0 - 3] [i_3] [i_3] [i_3] [i_4] [i_4] [i_4 - 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [(unsigned short)21] = ((/* implicit */signed char) (!(max(((_Bool)1), ((_Bool)1)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6119379209811610552LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18245)))))))))))));
        var_20 *= ((/* implicit */unsigned short) (_Bool)1);
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            {
                var_21 |= ((/* implicit */signed char) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (3781386650048068836ULL))))) || ((_Bool)0)));
                var_22 += (_Bool)1;
                arr_24 [i_6] [i_7] [i_7] |= ((/* implicit */signed char) arr_19 [i_6]);
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6479883669121830711ULL)) ? (-6119379209811610552LL) : (((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */long long int) -638916616)) : (-6119379209811610552LL)))));
            }
        } 
    } 
}
