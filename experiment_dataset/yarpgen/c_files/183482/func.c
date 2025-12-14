/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183482
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)2))));
        var_12 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [2LL]))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_13 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))) ? (((long long int) (!(((/* implicit */_Bool) var_4))))) : ((+(arr_1 [6LL]))));
        var_14 = ((/* implicit */long long int) ((unsigned char) max((arr_4 [i_1]), (((/* implicit */long long int) arr_3 [i_1])))));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    var_15 = min(((unsigned char)178), (max(((unsigned char)180), ((unsigned char)175))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(0LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) arr_8 [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) : (3346827810298900818LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [0LL] [i_6] [i_6])) ? (-2862372192241409170LL) : (min((((long long int) 8905899032519170044LL)), (7630552833513495078LL))));
                                var_18 = (+(((((/* implicit */_Bool) ((unsigned char) var_8))) ? (arr_9 [i_2]) : (var_4))));
                            }
                        } 
                    } 
                    var_19 = min((var_4), (((/* implicit */long long int) var_6)));
                }
            } 
        } 
    } 
}
