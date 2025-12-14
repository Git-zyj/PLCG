/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124421
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((((((/* implicit */long long int) ((((/* implicit */_Bool) -307672701376877375LL)) ? (2091761906) : (-2091761920)))) + (var_8))) + (9223372036854775807LL))) << (((((arr_4 [i_2] [i_2] [i_1] [5]) - (min((3453822772440428100ULL), (((/* implicit */unsigned long long int) var_11)))))) - (18086312424282881744ULL)))));
                    arr_7 [i_2] [i_1] [i_2] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_15)), (896052061))) - (((/* implicit */int) (unsigned short)41668))))) || (((/* implicit */_Bool) (~(1157654692))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (long long int i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            {
                arr_12 [i_4] [4LL] [i_3] = ((/* implicit */short) ((unsigned long long int) (~(2091761906))));
                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3453822772440428100ULL))))) : (((/* implicit */int) ((1157654692) <= (-2147483636)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9968802031580965001ULL)) && (((/* implicit */_Bool) 15971465327829016912ULL))))), (((unsigned long long int) var_3)))), (min((var_13), (((var_9) << (((var_14) + (842390367)))))))));
}
