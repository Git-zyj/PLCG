/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159008
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_7)) ^ (((((((/* implicit */int) (signed char)12)) ^ (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (signed char)-77))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) * (1186448244U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (-1542375343) : (((/* implicit */int) arr_3 [i_0 + 1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                            {
                                var_15 = (-(min((min((((/* implicit */unsigned int) var_12)), (arr_7 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_2] [i_0] [i_4]))))))));
                                var_16 = ((((/* implicit */_Bool) ((unsigned char) min((-330406026727149630LL), (((/* implicit */long long int) -1542375356)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1542375352)) ? (((/* implicit */unsigned int) -1542375372)) : (2751972071U)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) - (arr_0 [i_0 - 2] [i_0 - 2]))) : (arr_2 [i_4 - 2] [i_3 - 1]))));
                                arr_13 [i_4 - 2] [i_3] [17LL] [i_1] [2LL] [i_0 - 2] = ((/* implicit */short) ((unsigned char) ((unsigned int) arr_11 [i_3 + 1] [i_4 - 1] [i_0 - 2] [i_2 + 1] [i_3 + 1])));
                            }
                            /* LoopSeq 1 */
                            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(arr_11 [23U] [i_3] [(_Bool)0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_5])) ? (var_10) : (((/* implicit */long long int) 2751972065U)))))))) ? ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_7)))))) : (((/* implicit */int) var_8)))))));
                                arr_17 [i_5] [i_0] [i_3] [i_2 - 1] [(short)10] [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned int) (~(1542375359)))), (min((2751972070U), (((/* implicit */unsigned int) (unsigned short)41962)))))), (((/* implicit */unsigned int) -1991125456))));
                                var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (arr_11 [i_3] [(unsigned short)7] [i_3] [i_3] [i_3 - 1]) : (arr_11 [i_0] [i_0] [i_1] [i_3] [i_3 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) ? ((-(1542995215U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-93), ((signed char)-1))))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (signed char i_8 = 2; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (max((arr_5 [i_0] [i_0] [i_8]), (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_6 - 1] [i_7] [i_8] [i_8])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((min((((/* implicit */long long int) min((((/* implicit */short) arr_1 [i_0])), (var_12)))), (arr_2 [i_0] [i_0]))) + (22496LL)))));
                                arr_25 [17] [i_6] [17] [i_7] [i_8] = ((/* implicit */unsigned char) min((4294967288U), (((/* implicit */unsigned int) -1991125459))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_2);
    var_21 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 16; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) min((3091156707U), (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (max((1991125461), (-1542375372))))))));
                /* LoopSeq 2 */
                for (long long int i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    arr_33 [i_9] [4] [i_11 - 1] [i_11] = ((/* implicit */long long int) max((((arr_29 [i_9]) - (arr_29 [i_9]))), (((/* implicit */unsigned int) min(((-(-1354259088))), (((((/* implicit */_Bool) arr_3 [i_9])) ? (-1542375372) : (((/* implicit */int) var_2)))))))));
                    arr_34 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_9] [i_9])) || (((/* implicit */_Bool) arr_12 [i_9 + 1])))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_9 - 1] [i_9 - 1] [i_10] [i_11]))));
                }
                for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 4) 
                {
                    arr_38 [i_9] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8879674265603716133LL)))))) < (((907229388U) >> (((-1542375372) + (1542375396))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((~(0LL)))));
                    arr_39 [i_9] [i_9] [9U] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-28006)), (1542375343)))) && (((/* implicit */_Bool) -1354259088))));
                }
            }
        } 
    } 
}
