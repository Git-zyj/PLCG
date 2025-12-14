/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150504
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
    var_14 = ((/* implicit */unsigned long long int) (-(903131524U)));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) max(((unsigned short)3), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) (unsigned short)65533))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_6)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 903131517U)))))))))));
                var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(3745084438151888019ULL))))));
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((var_13) | (1757351801976878666ULL))))));
                arr_8 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) var_1);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                arr_13 [i_0] [i_0] [i_1] [i_4] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))) + (((unsigned long long int) var_11)));
                var_21 = (+(((/* implicit */int) var_7)));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 3) 
                {
                    arr_17 [i_0] [i_1] [i_5] [(short)12] = ((/* implicit */_Bool) var_2);
                    var_22 = ((/* implicit */_Bool) (-(var_3)));
                    var_23 = ((/* implicit */_Bool) var_12);
                }
                var_24 = var_11;
            }
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((unsigned int) (~(1301512058U))))) : (((((((/* implicit */int) (unsigned short)18149)) <= (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned long long int) ((3475501414U) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (0ULL)))));
            var_26 -= ((/* implicit */unsigned int) (unsigned short)25433);
            var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        }
        arr_18 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) max(((short)6477), (((/* implicit */short) (signed char)0))))), ((unsigned short)25414)));
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (unsigned short)25433);
                                var_29 = ((/* implicit */int) 2205876442U);
                            }
                        } 
                    } 
                    arr_28 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) (((-(819465879U))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95))))))))) : (7772081428840792055ULL)));
                    var_30 = var_12;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            arr_34 [i_10] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (2089090856U)));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3475501432U)))))));
        }
        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
        var_33 = ((/* implicit */_Bool) var_0);
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned char) var_7);
        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)38))));
    }
    var_35 = ((/* implicit */short) 14363571277444591171ULL);
}
