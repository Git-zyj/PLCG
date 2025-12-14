/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113922
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 15661898832081666080ULL))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_0)), (var_2))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((int) var_10))))));
    var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 17927853038258702216ULL)) ? (((/* implicit */int) var_8)) : (var_9)))))))) : (((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(arr_4 [i_0])))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_2])) << (((var_1) - (89785184U)))))), (518891035450849380ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [(short)4] = ((/* implicit */unsigned char) arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_1] [i_0] [(_Bool)1]);
                        var_14 -= (!(((/* implicit */_Bool) ((arr_5 [(unsigned short)0] [(unsigned short)0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) 518891035450849374ULL))))) : (max((arr_4 [0ULL]), (((/* implicit */int) var_7))))))));
                        var_15 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_7 [i_0])))));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_1 [i_1]))) + (((/* implicit */int) var_3))));
                        var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_3 - 2] [i_3 + 2])))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) arr_7 [i_0])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)10]) ? (arr_4 [i_1]) : (((/* implicit */int) arr_6 [i_0] [i_4])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (var_9))))))), (max((arr_12 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_4] [i_2]))))));
                        var_19 *= ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] = var_8;
                            arr_20 [i_2] [i_1] [i_5] [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((17927853038258702241ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))));
                            var_20 = ((/* implicit */unsigned int) ((arr_12 [i_0] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_4] [i_5])))));
                            var_21 = ((/* implicit */long long int) (~(518891035450849369ULL)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((269969401) / (((/* implicit */int) (short)-16656))));
                            arr_23 [i_6] [i_6] [(_Bool)1] [(_Bool)1] [i_6] [i_0] = ((/* implicit */unsigned long long int) arr_14 [8ULL] [i_4] [i_0]);
                            var_23 = max((((((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_17 [i_4] [i_0] [i_2] [i_4] [i_6])))) & (((((/* implicit */_Bool) arr_9 [i_4] [(short)1] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */int) var_0)))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_24 &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_1] [i_1]))) : (17927853038258702211ULL)))) ? (((/* implicit */int) ((short) var_7))) : (-269969403))));
                            var_25 *= ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_3 [i_7]))))));
                            var_26 = ((/* implicit */unsigned int) arr_14 [i_0] [i_4] [i_4]);
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_8);
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (17927853038258702206ULL) : (arr_12 [i_1] [(short)3])));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (5573771359896468808ULL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
}
