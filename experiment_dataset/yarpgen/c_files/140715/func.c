/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140715
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
    var_16 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */_Bool) arr_4 [10]);
                var_18 += ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) | (((/* implicit */int) arr_0 [i_0] [i_1]))))) % (((((/* implicit */_Bool) arr_5 [(signed char)2])) ? (15574810445758804529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)192))))), (((arr_0 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (810585998U))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 4; i_4 < 24; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_15 [4LL] [i_3] [i_4] [4LL] &= ((/* implicit */unsigned int) ((short) max(((~(((/* implicit */int) arr_9 [i_2] [12] [i_5])))), (((/* implicit */int) (signed char)88)))));
                        var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)60)))), ((-(((/* implicit */int) arr_11 [(unsigned short)12] [(unsigned short)12]))))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) arr_14 [(signed char)18] [(_Bool)1] [i_4] [i_5])), (arr_13 [i_2] [i_4] [i_4 - 4] [i_5])))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) >= (2871933627950747086ULL))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) -1931373007494681205LL)) || (((/* implicit */_Bool) 3180694797U))))) << ((((-(7287872283030999835LL))) + (7287872283030999848LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_6] = ((/* implicit */_Bool) (+(arr_16 [i_3 - 2] [i_4 + 1] [i_4 - 3] [i_3])));
                        arr_20 [i_2] [i_2 + 2] [i_3] [i_3] = ((/* implicit */int) (unsigned short)35246);
                    }
                    arr_21 [i_2 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4 - 1] [i_4 - 2])) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_17 [i_3] [i_2] [i_4] [i_4] [i_4 - 3] [i_2])) <= (((/* implicit */int) var_14))))), (arr_12 [2U] [i_3] [i_4 - 2] [i_4])))) : (-1458009196)));
                }
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) -5603576087885842021LL))));
                var_21 = ((/* implicit */long long int) ((max((((unsigned long long int) arr_11 [i_3] [i_3])), (((/* implicit */unsigned long long int) (-(arr_8 [i_2] [i_3])))))) < (max((((18233135316899777516ULL) % (((/* implicit */unsigned long long int) 810585998U)))), (((/* implicit */unsigned long long int) (short)-30014))))));
                arr_22 [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)30013)) * (0)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (-(((long long int) -894379118))));
}
