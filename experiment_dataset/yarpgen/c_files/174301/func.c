/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174301
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4243677610285715764LL)) ? (((var_11) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        var_14 = ((/* implicit */unsigned long long int) ((_Bool) (!((_Bool)1))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_10 [i_0 - 1] [i_1] [i_1] [i_3 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 17812447828886371343ULL)))) : (var_12))) ^ (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)0)))))))));
                        arr_11 [i_3 + 1] [i_2] [i_1] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((_Bool) var_0)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_15 += ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) - (var_12))) : (((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) >> (((var_7) - (3043980279293282306LL)))))));
                        var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9)))));
                    }
                } 
            } 
        } 
        arr_21 [i_0 - 1] = ((/* implicit */_Bool) var_11);
    }
    var_17 = ((/* implicit */int) ((_Bool) ((unsigned long long int) var_7)));
    var_18 = ((/* implicit */unsigned short) (_Bool)0);
    var_19 = ((((/* implicit */_Bool) 6641356877130846872LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) > (((/* implicit */int) (!(var_2)))))))) : ((-(((17592186044415ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    var_20 -= ((/* implicit */unsigned short) ((((unsigned long long int) var_8)) < (((/* implicit */unsigned long long int) -526724021))));
}
