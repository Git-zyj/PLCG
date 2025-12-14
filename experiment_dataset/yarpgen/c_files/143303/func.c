/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143303
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
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_6)) : (var_5)))) ? (min((16142869736204518267ULL), (((/* implicit */unsigned long long int) (unsigned short)63219)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)357)) ^ (((/* implicit */int) (signed char)-94))))))) ^ (((/* implicit */unsigned long long int) min(((+(var_5))), (((/* implicit */long long int) ((unsigned int) var_2))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) ^ (8732007983515352016ULL))), (((/* implicit */unsigned long long int) var_1))))));
                var_17 |= ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57139))) : (var_2))))), (min((((/* implicit */unsigned long long int) var_4)), (var_8)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)32)))))))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (unsigned char)246))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) var_9))))) - (min((((/* implicit */unsigned long long int) (unsigned char)1)), (6880169454322709942ULL)))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)23)) != (((/* implicit */int) var_12)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_15)))) : (max((((/* implicit */unsigned long long int) (unsigned short)57129)), (var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1946188414U)), (4611615649683210240ULL)))) ? (min((var_0), (var_0))) : ((+(((/* implicit */int) (unsigned char)9))))))) : (min((((long long int) var_14)), (((/* implicit */long long int) var_4)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)-33)) / (((/* implicit */int) (unsigned short)62430))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)32)))))));
                            var_19 = ((/* implicit */signed char) (~(max((((/* implicit */int) (unsigned short)47543)), (var_6)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) min((2082574949U), (((/* implicit */unsigned int) var_13))))) ? (max((var_2), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)17984)))))))));
}
