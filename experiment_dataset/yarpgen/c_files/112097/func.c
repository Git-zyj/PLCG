/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112097
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) 16777215)) >= ((~(arr_0 [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */unsigned int) 16777203)) <= (arr_9 [i_4] [i_3] [(unsigned char)6])))) % (((/* implicit */int) ((((/* implicit */_Bool) 101337263714037078LL)) && (((/* implicit */_Bool) (unsigned short)16018)))))))));
                                var_22 = (i_3 % 2 == zero) ? (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) ^ (((((/* implicit */_Bool) 16777217)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_3))))))), (((long long int) ((arr_9 [i_0] [i_3] [i_4 + 2]) >> (((arr_11 [(_Bool)1] [i_1] [i_2] [5U] [i_4] [i_3] [i_3]) + (2143305127))))))))) : (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) ^ (((((/* implicit */_Bool) 16777217)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_3))))))), (((long long int) ((arr_9 [i_0] [i_3] [i_4 + 2]) >> (((((arr_11 [(_Bool)1] [i_1] [i_2] [5U] [i_4] [i_3] [i_3]) - (2143305127))) + (1240470668)))))))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_0]))))))) ? ((~(max((arr_8 [15U] [15U]), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2])))))) : (((/* implicit */long long int) arr_11 [(short)14] [i_0] [i_1] [2U] [i_1] [i_1] [i_1])));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_24 = 2153450217694599227ULL;
                            arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1597345509U)) & (10152455299330844122ULL)));
                            var_25 = ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_2 [(_Bool)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : ((-(max((((/* implicit */unsigned int) 1637451573)), (3846673680U))))));
                            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) / (var_5)))) ? (((/* implicit */int) ((1927544108U) == (((/* implicit */unsigned int) 16777211))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_6 - 3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_9);
}
