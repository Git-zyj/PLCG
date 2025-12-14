/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158894
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
    var_13 = ((/* implicit */signed char) 3627248562507353007ULL);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (14819495511202198609ULL) : (var_10)))) ? (var_10) : ((-(3627248562507352992ULL))))) : (((/* implicit */unsigned long long int) ((int) max((-8399704323443523334LL), (8995665710952804LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_12))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (-8995665710952805LL))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 = (-(((((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)32627)) : (((/* implicit */int) var_0)))));
                                var_18 = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) var_3)) ? (14819495511202198630ULL) : (var_10))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2])))))));
                                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) 13835058055282163712ULL)) ? (8376330848787102741LL) : (max((-8995665710952790LL), (((/* implicit */long long int) (unsigned char)219))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8995665710952804LL)));
}
