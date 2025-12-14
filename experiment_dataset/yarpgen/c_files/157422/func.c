/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157422
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) 18446744073441116160ULL)) ? (var_5) : (-5103952724960625993LL))) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (signed char)57)))))))));
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 3])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_0] [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] [i_1] = min((min((((((/* implicit */int) (signed char)109)) - (((/* implicit */int) var_12)))), (((/* implicit */int) arr_1 [i_1 - 3])))), (((/* implicit */int) var_2)));
                    var_18 = ((/* implicit */int) max((var_18), (var_9)));
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_0] [(_Bool)1] [22ULL] = ((/* implicit */int) (_Bool)1);
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (((~(var_7))) | (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-1679739898139422985LL)))) + (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551601ULL))))))))));
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)14] [i_1 - 2]))) : (arr_9 [i_1 + 2] [i_1 + 2]))))));
                }
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    arr_17 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((4294967280U), (((/* implicit */unsigned int) var_1))))))))));
                    var_21 = ((9223372036854775803LL) >= (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [(_Bool)1] [i_4]))) * (min((11239824288430449836ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    arr_18 [i_4 - 2] [(_Bool)1] [i_4] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_4 - 2] [i_4]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 1) 
        {
            {
                var_23 = ((/* implicit */_Bool) min((max(((signed char)-24), (((/* implicit */signed char) (_Bool)1)))), (((signed char) max(((signed char)-7), (((/* implicit */signed char) arr_21 [0ULL] [i_6])))))));
                arr_25 [i_5 + 3] [i_6] [i_6] = ((/* implicit */_Bool) ((signed char) min((13137812512918501827ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)53367))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))))), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) ((unsigned long long int) var_9))))))) : (((((/* implicit */long long int) (~(var_1)))) % (((((/* implicit */long long int) var_1)) | (var_5)))))));
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (569507016U)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 569507024U)) : (var_5)))))) ? (min((-1986373783), (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) var_0))));
    var_27 = ((/* implicit */int) ((((/* implicit */int) var_0)) == ((-(((((/* implicit */int) var_17)) * (((/* implicit */int) var_4))))))));
}
