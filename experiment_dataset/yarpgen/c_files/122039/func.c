/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122039
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_0)) << (((arr_2 [i_0] [i_0]) - (8406848607552008418LL))))) : (((/* implicit */int) arr_3 [i_0]))));
        var_17 = (short)-25127;
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_18 = ((/* implicit */short) (~(((long long int) (short)-25127))));
            var_19 += ((/* implicit */short) ((signed char) ((short) ((signed char) (short)-8192))));
        }
        for (int i_3 = 1; i_3 < 24; i_3 += 2) 
        {
            var_20 = ((/* implicit */int) 7773920980224596099LL);
            var_21 = ((/* implicit */_Bool) var_10);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_22 += ((/* implicit */unsigned long long int) ((unsigned int) ((min((var_10), (((/* implicit */long long int) (short)29957)))) | (((/* implicit */long long int) (~(var_7)))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        arr_17 [i_4] [i_4] [i_5] [i_6] [i_1] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                        var_23 -= ((/* implicit */short) var_0);
                    }
                } 
            } 
        }
        arr_18 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((var_5) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        var_24 = ((/* implicit */long long int) (-(11189936675845330377ULL)));
    }
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (short i_7 = 3; i_7 < 20; i_7 += 3) 
    {
        var_26 += max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (-15LL) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) max((((/* implicit */short) var_15)), ((short)25646))))))), (var_1));
        arr_21 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_11 [i_7] [i_7])) : (((/* implicit */int) ((short) (short)29963)))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (unsigned int i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((signed char) (unsigned short)2987))), (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_7)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 7256807397864221237ULL)))))))));
                        var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10 + 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)5268))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_0 [i_10 + 3]))));
                        var_29 *= ((/* implicit */long long int) ((short) min((((/* implicit */unsigned int) ((_Bool) -1LL))), (((var_9) + (4224926284U))))));
                    }
                } 
            } 
        } 
        arr_29 [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-1452)), (7773920980224596103LL)));
    }
    var_30 = ((/* implicit */short) var_8);
    var_31 = ((/* implicit */signed char) var_8);
}
