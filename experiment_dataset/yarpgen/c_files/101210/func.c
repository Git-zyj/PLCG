/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101210
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
    var_18 = ((/* implicit */signed char) var_17);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_0])))));
        var_20 = ((/* implicit */long long int) min((var_20), (max((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((unsigned short) ((short) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), ((+(6264413490842050662ULL)))));
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-53)))))));
            }
            for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                var_23 -= ((/* implicit */short) (~(var_16)));
                var_24 = ((/* implicit */short) ((long long int) arr_5 [i_3 + 1]));
                arr_13 [i_1] [(short)1] = ((/* implicit */long long int) ((short) (unsigned char)83));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((_Bool) var_10)))));
                var_26 = ((/* implicit */signed char) (-(((unsigned long long int) 3297653909899044529LL))));
            }
            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_9 [i_1])))));
        }
        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(max((arr_9 [i_0]), (((/* implicit */long long int) (unsigned char)244))))))), (((unsigned long long int) (~(((/* implicit */int) var_11)))))));
            var_29 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((short) max((var_2), (((/* implicit */long long int) var_3)))))), ((-(((/* implicit */int) (short)-25520))))));
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_30 ^= max((((/* implicit */short) max(((unsigned char)244), ((unsigned char)216)))), (((short) var_12)));
                        var_31 ^= ((/* implicit */_Bool) (+(14475720573638769171ULL)));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (~(var_12)))))));
                            var_33 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */short) (_Bool)0)), ((short)32767))));
                        }
                        for (short i_8 = 2; i_8 < 7; i_8 += 4) 
                        {
                            var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_20 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 - 1])), ((short)7304)))), (((unsigned long long int) arr_20 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((long long int) (~(var_12)))))));
                            arr_26 [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)27725))), (((/* implicit */unsigned short) ((short) (_Bool)1))))))));
                            arr_27 [i_8 + 3] [i_4] [i_5] [i_4] [i_4] [9ULL] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (~(3971023500070782445ULL)))))));
                        }
                    }
                } 
            } 
            var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1482934163U))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = ((/* implicit */long long int) ((unsigned char) ((short) max((var_17), (arr_19 [8LL] [2LL] [2LL] [i_9])))));
        /* LoopNest 2 */
        for (long long int i_10 = 4; i_10 < 9; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                {
                    var_37 = ((/* implicit */_Bool) min((var_37), ((!(((/* implicit */_Bool) (short)25519))))));
                    arr_36 [i_9] [(_Bool)1] [i_10 - 3] [i_10] &= (~(((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (((unsigned char) var_0))))));
                }
            } 
        } 
        arr_37 [i_9] = ((/* implicit */_Bool) max((((long long int) -8274530616032058295LL)), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)13317)), (((unsigned short) 14475720573638769187ULL)))))));
    }
}
