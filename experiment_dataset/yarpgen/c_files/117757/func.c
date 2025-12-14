/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117757
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(5569812096761804799ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_4))))) : (max((((/* implicit */unsigned long long int) (signed char)-121)), (9090456920597809579ULL)))))) ? (var_5) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) var_0);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(signed char)23])) != (((/* implicit */int) arr_0 [i_0]))));
                    var_13 = (signed char)68;
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_14 &= ((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) var_0)))))))));
                    var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_13 [2ULL])) != (((/* implicit */int) arr_5 [i_3] [i_5] [i_5])))))) ? ((-((-(((/* implicit */int) arr_2 [i_3] [i_3])))))) : ((+(((/* implicit */int) arr_11 [i_4] [i_5]))))));
                    var_16 += ((/* implicit */signed char) ((arr_10 [i_3]) ? (max((min((15356890952854834161ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (signed char)-70)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18122938536668671828ULL)) ? (((/* implicit */unsigned long long int) 2029637884)) : (arr_15 [(_Bool)1] [(unsigned char)2]))))))))));
                    var_17 ^= ((/* implicit */_Bool) ((unsigned short) (unsigned short)496));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) 2029637884);
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((unsigned char) arr_7 [i_3])), (min((arr_7 [i_4]), (((/* implicit */unsigned char) var_1)))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40740))));
                        arr_22 [(signed char)6] [i_4] [i_5] [i_7] |= ((((/* implicit */_Bool) 18021203136671174322ULL)) ? (arr_15 [(signed char)0] [i_7]) : (18122938536668671833ULL));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)496)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))), (((/* implicit */unsigned long long int) ((arr_0 [i_3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_3] [(unsigned char)8] [i_3])))))))) ? (((unsigned long long int) var_7)) : (4695907170171526279ULL))))));
    }
}
