/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113592
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (~(((arr_0 [i_2] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))))));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) var_3))));
                }
                for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)35475))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_1) : (arr_7 [i_0] [i_1] [i_3] [i_3]))))) : (((/* implicit */int) ((var_1) < (((/* implicit */long long int) (-2147483647 - 1)))))))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)30)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(signed char)5] [i_3]))))) : (((/* implicit */int) ((unsigned short) var_4)))))) ? ((~(((/* implicit */int) var_2)))) : (arr_10 [i_0])));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10650)) << (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (((unsigned long long int) (unsigned short)5213))))));
                }
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_4 + 1] [i_5] [i_5 - 1] [i_5]), (arr_8 [i_0] [i_5 + 1] [i_4 - 1] [i_4 - 2]))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((+(262136U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81)))))));
                            arr_16 [i_0] [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) min((((unsigned int) min((var_6), (((/* implicit */unsigned char) var_2))))), (((/* implicit */unsigned int) (unsigned char)2))));
                            var_15 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (-5955056201315480759LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */int) ((((arr_13 [i_0] [i_0] [13LL] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) arr_10 [i_5 - 1])))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)-23)))))))) : ((+(((((/* implicit */int) arr_9 [i_5] [i_4] [i_0])) ^ (0))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_10 [i_0]), (((/* implicit */int) (_Bool)1))))) || (((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))) : (var_9)));
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) 14777911881484455604ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-18))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)172)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) 3767211725U)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((short) var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_26 [i_8] [i_7] [i_7] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_20 [i_6] [i_8])) ? (max((((/* implicit */unsigned long long int) var_4)), (var_7))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))), ((~((+(var_7)))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+(((unsigned long long int) arr_21 [12U])))) : (((/* implicit */unsigned long long int) min((((unsigned int) arr_18 [i_7])), (((/* implicit */unsigned int) arr_0 [i_6] [i_6]))))))))));
                }
            } 
        } 
    } 
}
