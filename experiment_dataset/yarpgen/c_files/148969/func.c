/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148969
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
    var_12 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((max((var_8), (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) (+(-12))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-16478)), (var_11)))) ? (max((var_1), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) -9))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 9; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] [i_2] [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (-1602309180)))), (((unsigned long long int) arr_0 [i_3]))));
                            var_13 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (-9093480196725430724LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3210837093U)) ? (((/* implicit */int) ((1602309191) == (((/* implicit */int) arr_10 [7ULL] [i_0] [7ULL] [i_0] [i_4] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_5])) != (arr_4 [i_1]))))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_6)));
                            arr_20 [i_5] [i_0 + 1] [i_1 + 3] [i_0 + 1] = ((/* implicit */unsigned char) (((-(arr_3 [i_0 - 1] [i_0] [i_0]))) == (arr_9 [i_5] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_4])));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) 3645932224U);
                arr_21 [i_1 - 1] [i_0 + 4] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((min((1602309179), (1602309183))) < (max((((/* implicit */int) (signed char)113)), (-608221059))))))));
                var_16 *= ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_17 [i_0 + 3] [i_0 + 3] [i_0 - 1])) * (0ULL))) * (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) ? (arr_16 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)106)) < (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((signed char) arr_19 [i_0] [i_0] [i_1 + 2] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_11 [i_1 + 3] [i_0 + 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((signed char) min((var_2), (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0))))));
    var_18 = ((/* implicit */unsigned short) (-(2833207798539720817LL)));
}
