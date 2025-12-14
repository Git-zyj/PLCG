/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155666
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
    var_17 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((_Bool) var_8))), (min((((/* implicit */unsigned long long int) var_15)), (var_10))))), (((/* implicit */unsigned long long int) min((((short) var_0)), (((/* implicit */short) min((((/* implicit */unsigned char) var_9)), (var_11)))))))));
    var_18 ^= ((/* implicit */long long int) var_3);
    var_19 = ((/* implicit */int) (+(min((((long long int) var_7)), (((/* implicit */long long int) min((var_4), (var_0))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */int) var_6);
        var_21 -= ((/* implicit */_Bool) var_2);
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -907027527)) ? (907027526) : (((/* implicit */int) (unsigned char)33))))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_12)))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > (((/* implicit */int) ((var_2) != (((/* implicit */int) var_5)))))))), (((signed char) var_2)))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((signed char) var_6));
        var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) min((var_5), (((/* implicit */signed char) var_9))))), (((unsigned short) var_7))))) >= (var_2)));
    }
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 *= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (((unsigned int) var_2))));
            arr_12 [i_2] [(signed char)4] [i_3] |= ((/* implicit */unsigned char) min((((unsigned short) var_12)), (((/* implicit */unsigned short) min((((unsigned char) var_14)), (((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_11))))))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) var_7);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        arr_22 [i_6] [i_5] [i_4] [i_2] = ((((/* implicit */_Bool) (unsigned short)61324)) ? (((/* implicit */int) (_Bool)1)) : (-1296746295));
                        var_27 = ((/* implicit */long long int) var_2);
                    }
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_28 = ((/* implicit */short) ((((((/* implicit */int) var_4)) - (((/* implicit */int) ((_Bool) var_6))))) != (min((((int) var_4)), (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */int) var_6))))))));
                arr_30 [i_2] [i_7] [i_2] = ((/* implicit */signed char) var_9);
            }
            var_29 = ((/* implicit */int) var_8);
            arr_31 [i_2] = ((/* implicit */long long int) var_4);
        }
        arr_32 [i_2] = ((/* implicit */int) var_1);
    }
    var_30 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_9)), (var_14))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61324))))));
}
