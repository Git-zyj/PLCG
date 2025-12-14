/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148550
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (unsigned char)252);
        arr_3 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) 820924510U)), (var_3))))) * (min((((/* implicit */unsigned long long int) (unsigned char)18)), (var_3)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 -= (unsigned char)247;
        var_16 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-39))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] [(signed char)14] [i_2] = ((/* implicit */_Bool) var_1);
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_19 [i_4] [12U] [(unsigned char)2] [(unsigned char)2] [i_5] = (+(var_8));
                            arr_20 [i_1] [i_1] [i_2] [i_4] [i_4] [(_Bool)1] = ((/* implicit */_Bool) (unsigned short)15360);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)22)) && (((/* implicit */_Bool) var_6))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5709304446061658005LL)) && (((/* implicit */_Bool) (signed char)38))));
                            var_20 = ((/* implicit */unsigned short) ((unsigned char) (signed char)36));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (signed char)-38))));
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                        }
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) 1310339014))));
                        var_24 = ((/* implicit */unsigned long long int) (unsigned char)3);
                    }
                } 
            } 
        }
        var_25 *= (!(((/* implicit */_Bool) (signed char)38)));
    }
    for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        var_26 = ((/* implicit */int) (unsigned char)247);
        arr_38 [i_11] = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) (signed char)37))))))));
        arr_39 [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((signed char) (_Bool)0))), (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))));
    }
    var_27 ^= var_9;
}
