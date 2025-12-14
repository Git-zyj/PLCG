/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14079
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
    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_7 [(unsigned short)10] [i_1] [i_1] [i_2]))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [1] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0] [2LL]);
                                var_16 = ((/* implicit */signed char) arr_3 [i_0]);
                                arr_15 [i_2] [i_1] [i_2] [i_4] = (unsigned short)49421;
                                var_17 = 517179263484088941LL;
                                var_18 = ((/* implicit */short) (-(((((/* implicit */int) arr_0 [i_4])) | (((/* implicit */int) arr_0 [i_0]))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2]), ((unsigned short)2921)))), (((((/* implicit */_Bool) (short)8329)) ? (((/* implicit */unsigned long long int) -517179263484088941LL)) : (6229869509641887337ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)185)), (var_7)))) ? (arr_5 [i_0] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_5]))))) : (max((((/* implicit */long long int) (unsigned char)245)), (517179263484088941LL)))));
                                var_19 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */long long int) 1874130292)) / (9173468699339567851LL))))), (((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)65238))))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (arr_5 [i_1] [i_2] [i_6])))) ? (max(((+(((/* implicit */int) (short)26959)))), ((-(((/* implicit */int) var_4)))))) : ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))));
                                arr_21 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (517179263484088941LL) : (-5172836079844016744LL)))));
                            }
                            var_21 = ((/* implicit */unsigned int) ((max((((((/* implicit */long long int) var_10)) & (arr_20 [i_2] [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]))) % (arr_3 [i_2])))))) / (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_10)))) + (((/* implicit */int) ((4441102454484933738ULL) <= (((/* implicit */unsigned long long int) arr_2 [i_0]))))))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 1874130292)), (7120377646244361373ULL)));
                arr_23 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5172836079844016744LL)) ? (-517179263484088937LL) : (((/* implicit */long long int) 2097151))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((min((3097077437286288276LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (((unsigned long long int) var_9))))))));
}
