/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156134
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
    var_19 = max((((/* implicit */unsigned long long int) min((var_15), (1152921487426977792LL)))), (max((((/* implicit */unsigned long long int) var_15)), (max((0ULL), (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = 15651486595194879936ULL;
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) var_9);
        arr_4 [i_0] = ((/* implicit */int) var_1);
        arr_5 [i_0 + 1] [7LL] = ((/* implicit */unsigned int) var_1);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) min((2795257478514671703ULL), (var_18)));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)64101)));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_13))));
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min(((signed char)-72), ((signed char)-76)))), (1659509473U)));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_23 = max(((short)27136), (((/* implicit */short) (signed char)-110)));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) max((max((((/* implicit */int) (unsigned short)51735)), (2147483644))), (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_4))));
                            var_25 = ((/* implicit */unsigned short) max((5250314546411093594ULL), (((/* implicit */unsigned long long int) min((683531688U), (((/* implicit */unsigned int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_21 [i_1] [i_2] [i_3] = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_4), ((unsigned short)1435)))), (min((var_12), (var_1)))))), (15651486595194879913ULL));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -926054802)), (var_5)));
                            var_27 ^= ((/* implicit */_Bool) -3675609985141482385LL);
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_9)))), (min((var_12), (((/* implicit */long long int) (signed char)41))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_9))));
                var_30 = 1145230858;
                var_31 = ((/* implicit */short) var_17);
            }
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                var_32 = ((/* implicit */int) max((((/* implicit */long long int) 2635457822U)), (max((((/* implicit */long long int) var_2)), (1453424877856379987LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_33 = var_8;
                    var_34 = ((/* implicit */unsigned char) (_Bool)1);
                }
            }
        }
    }
    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        var_36 = ((/* implicit */int) var_3);
        var_37 = min((((/* implicit */unsigned long long int) var_6)), (max((var_18), (((/* implicit */unsigned long long int) var_6)))));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    var_38 = ((/* implicit */int) var_1);
                    arr_40 [(_Bool)1] [i_13] [i_12] [i_11] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_13)), (min((min((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (short)3745))))));
                    var_39 &= ((/* implicit */short) max((-2147483644), (((/* implicit */int) (unsigned char)104))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_40 = ((/* implicit */long long int) (unsigned char)145);
        var_41 = ((/* implicit */unsigned int) (_Bool)1);
        var_42 -= ((/* implicit */unsigned long long int) var_15);
        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) 4294967295U))));
    }
    var_44 = max((min((max((((/* implicit */long long int) (unsigned short)55231)), (6557196117480693268LL))), (var_15))), (((/* implicit */long long int) var_6)));
}
