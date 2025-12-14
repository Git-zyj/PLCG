/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138273
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    var_10 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned long long int) (signed char)-1)), (var_3))))), (var_5)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */short) var_1);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_5] [i_5] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_8)))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (short)3)))))))));
                    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)0)), (519864852859914512ULL)));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */unsigned long long int) min((1390968948U), (((/* implicit */unsigned int) (short)-32765))))) : (((17926879220849637111ULL) >> (((519864852859914492ULL) - (519864852859914446ULL)))))))));
                    var_14 += ((/* implicit */int) ((((unsigned long long int) ((unsigned int) (signed char)-2))) >= (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned char)13)), (var_7))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)13))))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (unsigned char)46))));
        var_16 |= ((((/* implicit */_Bool) (+(((17926879220849637129ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))) ? (((/* implicit */unsigned long long int) (((+(var_7))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)108)))))) : (var_3));
        var_17 -= ((short) ((((/* implicit */_Bool) 7838876011426684435LL)) && (((/* implicit */_Bool) (unsigned char)254))));
    }
    for (long long int i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((((((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (4503599627366400LL))) & (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)3)))))));
        var_19 |= ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)234)) - (((/* implicit */int) var_8))))), (((long long int) var_8)))));
        arr_20 [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)96))));
        var_20 = ((((/* implicit */int) ((_Bool) ((signed char) var_8)))) << (((((unsigned long long int) ((((/* implicit */int) (unsigned char)129)) & (((/* implicit */int) (unsigned char)249))))) - (106ULL))));
    }
    for (long long int i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
    {
        var_21 = min((((/* implicit */unsigned int) var_9)), (((min((var_5), (((/* implicit */unsigned int) var_6)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (signed char)126)))))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(min((13112427060083453578ULL), (((/* implicit */unsigned long long int) var_7)))))))));
    }
    var_23 = ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) (_Bool)1)), (var_7))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))))) & (((/* implicit */long long int) ((unsigned int) ((signed char) var_2))))));
}
