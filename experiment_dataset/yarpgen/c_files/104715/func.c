/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104715
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)229)) % (((/* implicit */int) var_11))))))), (var_15)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1]))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? ((-(arr_10 [i_1] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))))) ^ ((-(7845975003365357937ULL)))));
                        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_14 [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 3])))) ? (((((/* implicit */unsigned long long int) arr_14 [i_1 - 2] [i_1 - 3] [i_1] [i_1] [i_1] [i_1 - 4])) ^ (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_2] [i_1 - 1] [i_1] [i_1 - 3]))))))));
                        var_20 = ((/* implicit */signed char) var_15);
                        var_21 = ((/* implicit */unsigned char) (+(arr_2 [i_0])));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) arr_11 [i_0]);
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
        }
        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_4]))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_9)) != (arr_13 [i_0] [i_0] [i_0] [(unsigned char)10]))) ? (var_14) : (arr_17 [i_0] [10]))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */int) var_5)) != (((/* implicit */int) arr_18 [i_0] [i_4] [(unsigned char)1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_18 [i_0] [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_0] [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_18 [(unsigned char)8] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))))))));
            var_26 = ((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */long long int) ((arr_16 [i_0] [i_4]) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
            arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7845975003365357937ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))));
        }
        for (unsigned char i_5 = 3; i_5 < 8; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (long long int i_7 = 2; i_7 < 9; i_7 += 1) 
                {
                    {
                        var_27 &= ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))) : (((long long int) var_16))));
                        arr_27 [i_6] &= ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_6] [i_7]);
                        var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (12813292996002804921ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3)))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_7) ^ (var_12)))) ? (((((/* implicit */_Bool) 10600769070344193678ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_16))) : (((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_23 [i_0])))) && (((/* implicit */_Bool) var_4)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 4; i_9 < 7; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) % (var_13)));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_0 [i_9]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 1) 
            {
                for (unsigned int i_13 = 2; i_13 < 10; i_13 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) arr_21 [4ULL] [i_8])))) ? (min((var_12), (((/* implicit */unsigned int) var_1)))) : (min((var_14), (((/* implicit */unsigned int) (unsigned char)255)))))))))));
                        var_33 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))), ((+(((((/* implicit */_Bool) arr_3 [i_0])) ? (0LL) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_13]))))))));
                        arr_44 [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_0 [i_12 - 1]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0]))))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2251799813684224ULL)) ? (-1541627585240117284LL) : (3153543739477298598LL))) % (((1665145967037513955LL) ^ (((/* implicit */long long int) var_12)))))))));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (+(1665145967037513955LL))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) arr_41 [i_0] [(_Bool)1] [i_0]);
                    arr_49 [i_0] = ((/* implicit */short) var_9);
                }
            } 
        } 
    }
}
