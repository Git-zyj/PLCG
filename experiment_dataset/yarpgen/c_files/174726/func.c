/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174726
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((((/* implicit */short) min(((signed char)-96), (((/* implicit */signed char) (_Bool)0))))), (((short) ((unsigned short) (_Bool)1)))));
        /* LoopSeq 4 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */int) min((max((((/* implicit */long long int) max((arr_5 [i_0]), (arr_5 [i_0])))), (min((-7930087974862276782LL), (((/* implicit */long long int) arr_2 [i_0])))))), (((/* implicit */long long int) ((int) -2465312890358550980LL)))));
            arr_8 [i_0] [i_1] = ((/* implicit */signed char) max((15429315022513656637ULL), (((/* implicit */unsigned long long int) -1788489311))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_21 &= (!((_Bool)0));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_0]))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((int) var_5)))));
            var_24 = arr_2 [i_0];
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_0 [i_3] [i_0]), (arr_0 [i_0] [i_0])))), (max((((((((/* implicit */int) arr_0 [i_0] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_0])) - (31))))), ((+(((/* implicit */int) var_10))))))));
            var_25 = max((var_18), (((/* implicit */unsigned int) var_11)));
            var_26 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) != (((/* implicit */int) arr_11 [i_0]))))) / (((/* implicit */int) max((arr_11 [i_0]), (arr_11 [i_0]))))));
            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_3] [i_3]))) | (((unsigned int) arr_4 [4] [i_3] [i_3])))))));
            var_28 = -2694941869334587425LL;
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((_Bool) (~(3017429051195894979ULL)))))));
            var_30 = ((/* implicit */long long int) var_5);
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) arr_11 [i_4]))), ((((!(var_5))) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_4] [i_0])) : (max((((/* implicit */unsigned long long int) arr_6 [i_5])), (arr_14 [i_0] [i_4] [i_5]))))))))));
                var_32 = ((/* implicit */signed char) max((arr_15 [i_0]), ((unsigned short)5508)));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_16 [1] [1]) & (arr_16 [i_0] [i_0])))) ? (max((-2694941869334587421LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (arr_16 [i_0] [i_4]) : (arr_16 [i_0] [i_4]))))));
                arr_21 [i_0] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 2147483633)), (15429315022513656609ULL)));
            }
            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4] [i_0])) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)15)) == (var_2)))))))));
        }
    }
    var_35 = ((/* implicit */unsigned long long int) max((var_1), (var_18)));
    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(2147483633))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (2829015137U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9900823286068971193ULL)) ? (950703699) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_15))))))))))))));
}
