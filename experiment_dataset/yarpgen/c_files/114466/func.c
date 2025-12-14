/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114466
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_11 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(699217157U)))) * (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)124))))));
        arr_3 [i_0] = ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_0 [i_0])))))) & (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)71))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -803934389)), (10370605390579737966ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (((((/* implicit */_Bool) var_3)) ? ((~(var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)58212)) : (((/* implicit */int) (unsigned short)0)))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7952))) == (7LL))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_13 = (~(arr_9 [i_1 - 1] [i_2] [i_3]));
                    arr_14 [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_1 + 1]));
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)8875)) ^ (((/* implicit */int) (unsigned char)170))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_8 [i_1] [i_1]))))))));
                    arr_19 [i_3] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) -1557788169))))))));
                }
                arr_20 [i_1 - 1] [i_1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (min((var_2), (arr_15 [i_1 - 1] [(_Bool)0])))))));
            }
            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))));
        }
        arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) < (14410441443670151331ULL)));
    }
    var_17 = ((/* implicit */signed char) min((max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) 1645392184)))))))));
}
