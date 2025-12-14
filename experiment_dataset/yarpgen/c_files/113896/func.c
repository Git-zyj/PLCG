/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113896
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */unsigned long long int) max(((-(((((/* implicit */int) arr_3 [i_1] [i_0] [i_0 + 2])) ^ (((/* implicit */int) (short)9715)))))), (((/* implicit */int) ((_Bool) max((arr_1 [i_1] [12LL]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_1 + 1])) ? (arr_1 [i_0 + 2] [i_1 + 2]) : (arr_1 [i_0 + 2] [i_1 + 4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                arr_4 [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0 + 2] [i_0])))) >= (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (4359828869749114537LL)))))) * (((/* implicit */int) min((((/* implicit */short) min((((/* implicit */signed char) arr_2 [i_1 + 3] [i_0])), (arr_3 [i_1] [i_0] [i_1])))), (var_1))))));
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 2] [i_1 + 3]))) || (((/* implicit */_Bool) ((short) arr_0 [i_0 + 3] [11ULL])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                arr_13 [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2])) - (((/* implicit */int) arr_11 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : ((~(((((/* implicit */_Bool) arr_0 [i_3] [i_2])) ? (arr_10 [(short)3] [i_3] [i_2 - 1]) : (((/* implicit */unsigned long long int) 1258692629))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_20 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) min(((-(((unsigned int) var_16)))), (((/* implicit */unsigned int) (unsigned char)69))));
                            var_20 = (unsigned char)232;
                            var_21 = ((/* implicit */long long int) 1177454667);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_4))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) < (var_13))))))))));
    var_23 = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned short) ((signed char) var_2)))));
}
