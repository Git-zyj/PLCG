/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126450
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) var_11);
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_14))))) : ((~(6263642396137261579LL)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_2] [i_2 + 1] [i_2 + 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [7LL] [i_1] [i_2] [i_3] [7LL] = ((/* implicit */unsigned short) -13LL);
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0 + 2] [i_2] [i_2 + 1] [i_4 + 2]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_2);
    var_19 = ((/* implicit */unsigned int) (unsigned char)116);
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        for (int i_6 = 3; i_6 < 11; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)1]))) : (3386497566664597793ULL)))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_12 [i_5] [i_6] [i_5] [(signed char)10] [i_8]))) : (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))))));
                            var_21 &= ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_5 + 4])) - (((/* implicit */int) arr_2 [i_5 + 4]))))) ^ (((((3386497566664597803ULL) * (((/* implicit */unsigned long long int) 4294967295U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))))));
                            arr_24 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 433958181U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-106)) * (((/* implicit */int) var_6))))) ? (var_12) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) var_8))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_8] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) : (((long long int) var_5)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_5] [i_5] [i_5 + 2] [i_5 + 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1026324185)) % (arr_11 [i_5] [i_5] [(short)14] [(_Bool)1] [(short)14])))) && (var_0))))) : (7185764522288486786ULL))))));
                var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(-9223372036854775784LL)))) ? (var_9) : (((((/* implicit */_Bool) arr_16 [8ULL] [i_5])) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned char)112))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 23; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 3) 
        {
            {
                arr_32 [i_9] [i_9] [i_10] = (~(((var_0) ? (min((var_9), (((/* implicit */int) var_0)))) : (((/* implicit */int) (signed char)101)))));
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 24; i_11 += 2) 
                {
                    for (signed char i_12 = 2; i_12 < 24; i_12 += 1) 
                    {
                        {
                            arr_37 [i_11] [i_10] = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) (signed char)-106)) ? (552562955U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                            arr_38 [i_11] [i_11] = ((((/* implicit */int) (signed char)36)) & (-1559473328));
                        }
                    } 
                } 
                arr_39 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_31 [i_10 + 2] [i_10]));
                var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_26 [i_10 - 1] [i_9])))));
            }
        } 
    } 
}
