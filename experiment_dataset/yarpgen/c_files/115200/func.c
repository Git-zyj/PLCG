/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115200
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) min(((unsigned short)2), (var_1)))), (min((var_7), (((/* implicit */long long int) var_1)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [(signed char)9] [i_1] = ((/* implicit */unsigned short) min((min((min((var_2), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0])))), (min((0ULL), (var_11))))), ((~(min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 1] [i_2] [i_0])), (var_2)))))));
                    var_15 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1]))))), (min((arr_2 [i_2]), (((/* implicit */unsigned int) -1))))))), ((-(min((((/* implicit */unsigned long long int) var_8)), (var_4)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) (+((~(var_11)))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (long long int i_5 = 4; i_5 < 7; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        arr_23 [i_3 - 1] [i_4] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */int) (-((~(var_0)))));
                        var_17 = ((/* implicit */int) (~((~(var_11)))));
                        arr_24 [i_4] = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)14588))))));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)0)))))))));
            arr_27 [0LL] [i_7 - 1] [0LL] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3 - 1] [i_3])))))));
            arr_28 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_9))))));
            arr_29 [i_7] = (+((-(23668804U))));
        }
        arr_30 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_9))))));
        var_19 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)24))))));
    }
    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        arr_34 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_7 [i_8]))))))))));
        var_20 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_6 [i_8] [i_8] [i_8])))))))));
        var_21 ^= ((/* implicit */_Bool) min((min((min((var_13), (((/* implicit */long long int) (unsigned char)227)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_8]))))))), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) 46163709)))), ((!(((/* implicit */_Bool) arr_33 [i_8] [i_8])))))))));
    }
    var_22 = ((/* implicit */long long int) min(((~((~(var_4))))), (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (signed char)-47)), (var_7))))))));
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_6))))))), (min(((~(var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))));
}
