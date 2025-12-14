/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149804
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
    var_18 &= ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (5345392593100146442LL) : (5345392593100146465LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) -5345392593100146465LL))))) % (((/* implicit */int) var_16)))) >= (((/* implicit */int) (!(var_10))))));
                var_19 |= ((/* implicit */signed char) -5345392593100146465LL);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_20 &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -5345392593100146448LL))))) / (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) -5345392593100146465LL))) / (((/* implicit */int) var_4))));
                            var_22 = ((/* implicit */_Bool) min((5345392593100146465LL), (5345392593100146465LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((min((5345392593100146463LL), (5345392593100146463LL))) <= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_5)) : (-5345392593100146463LL)))))) >> (((((((/* implicit */_Bool) 5345392593100146465LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : ((~(5345392593100146457LL))))) - (108LL)))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_24 = min((min((((/* implicit */long long int) var_16)), (var_7))), (((((/* implicit */_Bool) -5345392593100146443LL)) ? (5345392593100146465LL) : (5345392593100146440LL))));
                        var_25 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) -5345392593100146465LL))))))));
                        var_26 = ((/* implicit */short) ((min((-5345392593100146442LL), (-5345392593100146465LL))) / (-5345392593100146436LL)));
                    }
                }
            } 
        } 
    } 
    var_27 &= ((/* implicit */long long int) (((-((+(var_3))))) << (((((((/* implicit */_Bool) -5345392593100146465LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5345392593100146465LL))) % (((((/* implicit */_Bool) 5345392593100146464LL)) ? (-5345392593100146465LL) : (5345392593100146457LL)))))));
}
