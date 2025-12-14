/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136936
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */int) (signed char)-99)))) | (((/* implicit */int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((var_8) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1018863839)) ? (((/* implicit */int) (signed char)-74)) : (-1979147124)))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_0] = arr_4 [i_0] [i_0] [i_1];
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((max((var_7), (((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 4])))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 4]) : (arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 1])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (arr_4 [i_0] [i_0] [i_0])));
                    arr_14 [i_0] [i_1 + 1] [i_0] [i_3] &= var_5;
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_3] [i_1] [i_2 - 2])) << (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2 + 1]))));
                }
                arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1]))));
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [(signed char)0] [i_1 + 1] [(signed char)0])) % (((/* implicit */int) var_3))));
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1018863839)) ^ (-3649397656929533517LL)))) ? (max((((/* implicit */long long int) arr_18 [i_0])), (-3649397656929533500LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_4])) | ((+(((/* implicit */int) (unsigned char)142)))))))));
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    {
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) var_2))))))) / (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) 3670016U))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0]))));
                        arr_24 [i_0] &= ((/* implicit */_Bool) max((max((((/* implicit */int) ((unsigned short) (unsigned char)255))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [0U] [i_5] [i_4] [i_0])), (var_5)))) || ((!(((/* implicit */_Bool) var_1)))))))));
                        var_19 += ((/* implicit */unsigned short) ((unsigned int) (+(665882992930939576LL))));
                    }
                } 
            } 
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_20 [i_0] [i_0] [i_4]))))))) % (max((((/* implicit */int) (signed char)-74)), (-1018863817)))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                arr_27 [i_0] [i_0] [12] &= ((/* implicit */long long int) ((unsigned int) arr_9 [i_0] [i_0] [i_4] [i_7]));
                var_21 ^= ((/* implicit */long long int) (+(max((((/* implicit */int) arr_4 [i_0] [i_4] [i_7])), (arr_2 [i_0] [i_4] [i_0])))));
            }
        }
    }
    var_22 = ((/* implicit */signed char) (((_Bool)1) ? (max((var_0), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((var_9), (((/* implicit */long long int) 1720508886)))) : (((var_6) ^ (var_7))))))));
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_6)))))) >= (var_5))) ? ((+((~(var_6))))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
}
