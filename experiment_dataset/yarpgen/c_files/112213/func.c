/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112213
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) max((var_15), (((/* implicit */short) var_4))))) & (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_9 [i_3] &= ((/* implicit */_Bool) ((min((((((/* implicit */int) (short)-2504)) < (((/* implicit */int) (short)4)))), ((!(((/* implicit */_Bool) (short)2503)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) (short)2490)) - (2468)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [i_0] [i_1] [(unsigned char)6] [i_3]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-8)))) | ((+(-950472137))))))));
                        var_17 = ((/* implicit */short) var_13);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = (!(((/* implicit */_Bool) (+(min((((/* implicit */long long int) (short)12295)), (arr_3 [i_1] [i_3] [i_1])))))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) min(((short)-8), ((short)-5)))), ((unsigned short)27)));
                            arr_14 [i_0] [i_0] [i_0] [18LL] [i_4] = ((/* implicit */unsigned char) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (var_14)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)61191))))), ((-(7LL))))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [(unsigned short)10] = ((/* implicit */_Bool) var_14);
                        var_18 = (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [7LL] [i_1] [18ULL])));
                        var_19 = (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_4))))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        var_20 &= ((/* implicit */unsigned long long int) ((_Bool) (((!(((/* implicit */_Bool) (short)2468)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) (unsigned short)0)), (5946204304410936610ULL))))));
                        var_21 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        var_22 -= ((signed char) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) var_6)) : (463496695)));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) >= (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))), ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))))) != (((((/* implicit */_Bool) 2032813978)) ? (((/* implicit */int) (short)2483)) : (((/* implicit */int) (unsigned short)31181)))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_2] [16U] = ((((/* implicit */_Bool) (short)-2504)) ? (33292288) : (((/* implicit */int) (short)0)));
                        var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)32)) | (((/* implicit */int) (unsigned short)65526)))), (((/* implicit */int) (short)4))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((var_10) - (9308588833075755294ULL)))))))))));
                    }
                }
            } 
        } 
    } 
}
