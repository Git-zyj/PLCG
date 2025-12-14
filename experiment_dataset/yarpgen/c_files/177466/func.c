/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177466
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = var_0;
        var_14 = ((/* implicit */short) max((((long long int) var_4)), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_2))))));
        var_15 = ((((var_10) % (var_2))) & (min((var_7), (min((var_3), (((/* implicit */unsigned long long int) (unsigned short)35242)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35230)) && (((/* implicit */_Bool) var_2))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_17 = ((/* implicit */signed char) var_4);
            var_18 -= ((/* implicit */int) ((var_2) < (var_2)));
        }
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) (unsigned short)30293)) - (30266)))))) ? (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 1304474840))))));
                            var_20 = ((/* implicit */signed char) (~(var_4)));
                            var_21 += ((/* implicit */int) ((((/* implicit */int) (unsigned short)35826)) <= (((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) 2511220589U)))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) var_5)))));
                            var_23 ^= ((/* implicit */unsigned char) (signed char)4);
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1)) / (var_5)));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)-32743))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-99)) <= (-2147483636)))) : (((/* implicit */int) (_Bool)1)))))));
                var_26 = ((/* implicit */signed char) (~((-(var_1)))));
                arr_21 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
                var_27 = 2147483647;
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) ((long long int) var_7));
                    var_29 = ((/* implicit */unsigned short) ((long long int) (unsigned char)135));
                }
            }
            var_30 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
        }
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) -22)) || (((/* implicit */_Bool) var_4)))));
            arr_26 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 21))) && (((/* implicit */_Bool) var_10))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                for (int i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned int) 2147483628);
                        var_33 = ((/* implicit */signed char) ((unsigned short) var_11));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) ((unsigned long long int) (signed char)(-127 - 1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) : (var_2)))));
    }
    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)9))))), (((var_4) + (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
    var_36 = ((/* implicit */unsigned short) var_3);
    var_37 = ((/* implicit */int) ((unsigned int) (signed char)-72));
}
