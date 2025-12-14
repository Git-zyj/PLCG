/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108464
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
    var_18 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned long long int) ((int) ((long long int) var_15))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_2 [i_0])))) & (((/* implicit */int) ((unsigned short) (unsigned short)64184)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_2 [i_0])))))) : ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (15601759972162005010ULL)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_13 [(short)0] [6LL] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)14), (((/* implicit */unsigned short) var_3)))))))) ? (((/* implicit */int) (unsigned char)205)) : (((((/* implicit */int) arr_2 [i_3])) % (((/* implicit */int) arr_2 [i_1]))))));
                        var_20 = ((/* implicit */unsigned char) 5731755352143176254LL);
                        arr_14 [(short)4] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) max(((short)-4517), (((/* implicit */short) var_1))))) == (((/* implicit */int) arr_2 [i_0]))))) > (-19)));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_6 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 4; i_4 < 7; i_4 += 2) 
        {
            arr_18 [i_0] = ((/* implicit */unsigned char) (short)333);
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                arr_21 [i_0] [i_4 - 1] [i_4] &= ((/* implicit */_Bool) ((arr_17 [i_4 - 2]) | (((/* implicit */unsigned long long int) var_13))));
                arr_22 [i_5] = ((/* implicit */short) ((((_Bool) arr_5 [i_0] [i_0] [(unsigned short)9])) ? (((/* implicit */int) arr_16 [i_4 - 4] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) ((arr_20 [i_4 + 1] [i_5] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-23644))))))));
                arr_23 [i_0] [i_0] [(short)8] |= ((/* implicit */unsigned char) var_11);
                arr_24 [i_4] [i_0] [i_5 - 1] [i_4 + 2] &= ((/* implicit */unsigned short) ((arr_11 [i_4 + 2] [i_5 + 1]) - (arr_11 [i_4 - 3] [i_5 - 1])));
                arr_25 [i_0] [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_4 - 4] [i_5 - 1])) >= (((/* implicit */int) arr_4 [i_0] [i_0]))));
            }
            arr_26 [5U] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4938610296502697687LL)) ? (5512385991246638177LL) : (-5512385991246638178LL))) << (((((((/* implicit */_Bool) -5512385991246638193LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64162))) : (arr_17 [i_0]))) - (64162ULL)))));
            arr_27 [i_0] = ((long long int) arr_1 [i_4 - 2]);
            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (82649087U))) + (((/* implicit */unsigned int) arr_0 [i_4 + 2]))));
        }
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(var_6)))) - (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)31720)) || (((/* implicit */_Bool) var_13)))))) : (((long long int) var_8))))));
    var_23 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned long long int) -305062775)) : (8809815815414438792ULL))));
}
