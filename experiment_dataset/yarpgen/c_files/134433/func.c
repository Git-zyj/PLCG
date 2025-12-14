/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134433
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)51353))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 4] [i_2]))))) | ((~(((arr_4 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0]))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_8 [i_1] [i_1])))), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -573861505)) ? (((/* implicit */int) (unsigned short)14174)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_3 [i_2])) : (((((/* implicit */_Bool) (unsigned short)14182)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_2] [i_1])))))))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_6 [i_0]))))) ? ((~(arr_5 [i_0] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 + 3])) * (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_4])))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_8 [i_0] [i_3])))))))));
                            arr_15 [i_0] [i_1] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) min((58720256), (((/* implicit */int) arr_3 [i_2]))))) != ((+(arr_4 [i_3])))))));
                            var_21 *= ((((/* implicit */_Bool) (+(arr_0 [i_1 + 2])))) ? (min((((unsigned int) (short)27477)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_3])) < (((/* implicit */int) (short)-32423))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_0]) ? (((/* implicit */int) (unsigned short)14186)) : (((/* implicit */int) arr_12 [i_4]))))) || (((/* implicit */_Bool) ((arr_12 [i_4]) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_7 [i_1 + 3] [i_3]))))))))));
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0]))));
                        }
                        for (short i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)44109)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51354)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [i_3]))))) : ((+(arr_5 [i_0] [i_0])))))));
                            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)14182))));
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) var_13);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14174)) ? (var_13) : (4121941716U)))) ? (((((/* implicit */_Bool) 2125698624)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)1886)))) : (((/* implicit */int) (unsigned short)51853))))) ^ (((((/* implicit */_Bool) max((899953508), (((/* implicit */int) (unsigned short)51362))))) ? (((/* implicit */unsigned long long int) 5280109507417215754LL)) : (((unsigned long long int) var_2))))));
}
