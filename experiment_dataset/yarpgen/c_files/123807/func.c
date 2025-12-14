/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123807
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
    var_20 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) var_12)), (var_4))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_18))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14632222845081435382ULL)) ? (var_1) : (var_9)))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((540907337U), (((/* implicit */unsigned int) (short)8230))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (((arr_0 [i_0]) * (var_18))))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_10 [i_2] [i_2])))));
                    arr_14 [(short)7] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1833975811)) ? (3814521228628116260ULL) : (3814521228628116235ULL)));
                    arr_15 [i_2] = ((/* implicit */unsigned short) var_17);
                    var_24 = ((/* implicit */int) max((min((14632222845081435380ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (arr_0 [i_2 - 1])));
                }
            } 
        } 
    }
    for (int i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((3814521228628116233ULL), (14632222845081435386ULL))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    arr_27 [i_5] [i_6] [2U] [i_6] = ((/* implicit */unsigned long long int) var_2);
                    arr_28 [i_5] [i_5] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_17 [i_4 - 1]) ? (((/* implicit */int) arr_17 [i_4 - 1])) : (((/* implicit */int) var_17))))), (((14632222845081435377ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_32 [i_7] [i_8 + 1])) ? (var_9) : (arr_32 [i_7] [i_8 + 2]))), (((/* implicit */long long int) ((((/* implicit */long long int) var_8)) != (arr_32 [i_7] [i_8 + 1]))))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (signed char)-90)))))));
                    var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (((+(var_13))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4])))))) ? (((/* implicit */unsigned long long int) 3379292163U)) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_4] [i_7 - 1] [i_7 - 1] [i_8]))))) - (3814521228628116248ULL)))));
                    var_29 = ((/* implicit */_Bool) min((((((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7]))) > (var_1))) ? ((-(14632222845081435396ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4]))) / (arr_24 [i_4] [17ULL] [i_8])))))), (3814521228628116229ULL)));
                }
            } 
        } 
    }
    for (int i_9 = 1; i_9 < 20; i_9 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) (_Bool)1)))));
        var_31 = min((((/* implicit */long long int) ((signed char) arr_22 [i_9] [i_9 - 1]))), (max((((/* implicit */long long int) max(((unsigned short)16851), (((/* implicit */unsigned short) arr_33 [i_9 + 1] [i_9]))))), (((long long int) 3814521228628116260ULL)))));
    }
    var_32 *= ((/* implicit */unsigned short) var_11);
}
