/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160217
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
    var_10 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-27))));
                    arr_9 [i_0] [i_1] [9LL] = ((/* implicit */signed char) ((((_Bool) (signed char)-32)) ? ((-(min((18446744073709551613ULL), (768837658784619453ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (signed char)35))) ^ (1518212130))))));
                    arr_10 [4ULL] [(signed char)2] [2ULL] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) -1518212107))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)243))) : (-724841997)));
                    var_12 ^= ((/* implicit */int) 448812237756451230LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                arr_18 [(unsigned char)5] [(unsigned char)5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)57443)) ? (254629902718455441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))));
                var_13 = ((/* implicit */signed char) -1442428939);
                arr_19 [(unsigned char)10] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1134502613)) ? (((/* implicit */int) (unsigned short)50651)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) (unsigned char)137)) : (1518212130)))))) ? (max((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL)))) : (min((1084991208996312638LL), (-448812237756451225LL)))));
                var_14 = ((/* implicit */short) min((6996321557583059006LL), (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned char)255)))), (-1518212107))))));
            }
        } 
    } 
}
