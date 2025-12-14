/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174488
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
    var_10 = ((/* implicit */signed char) min((((((/* implicit */int) var_0)) >> ((((-(((/* implicit */int) (_Bool)1)))) + (13))))), ((-(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_11 *= ((/* implicit */signed char) var_1);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_1]) * (arr_4 [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0])))))));
                            arr_12 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)49002)))) * (((/* implicit */int) (_Bool)1))));
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) arr_1 [i_0]);
                var_15 &= ((/* implicit */int) (((-(((/* implicit */int) var_3)))) == (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)16518))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        {
                            arr_20 [0] [i_0] [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */unsigned int) var_5);
                            var_17 = ((/* implicit */int) ((signed char) (+(arr_4 [i_0] [i_5] [i_0]))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(unsigned short)2])) <= (((/* implicit */int) var_7))))))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        }
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) arr_17 [(signed char)6] [i_0] [(signed char)6] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)1] [(signed char)2])))), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))))))));
        arr_22 [i_0] = ((/* implicit */unsigned short) (((((_Bool)0) && ((_Bool)1))) || (((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) 2806362509U))))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_26 [i_8] = ((/* implicit */signed char) (!((((_Bool)1) && (((/* implicit */_Bool) 212776273U))))));
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8] [i_8])))))));
        arr_27 [i_8] [i_8] = arr_24 [i_8] [i_8];
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        arr_31 [i_9] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_6))))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    {
                        arr_44 [i_9] [i_10] [i_10] [i_12] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)49013))))), (min((var_1), (((/* implicit */unsigned int) (signed char)127))))))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 3; i_13 < 20; i_13 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_46 [i_12] [i_12] [i_12] [i_12] [i_11] [i_9] [i_9]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1013373559U))))) : ((+((+(((/* implicit */int) arr_34 [i_9] [i_9] [i_9])))))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) -56702434)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (unsigned short)4095)))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_14 = 2; i_14 < 20; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) > (((((/* implicit */int) (signed char)-71)) / (1694145427)))));
                            arr_51 [i_9] [i_10] [i_9] [i_10] [i_14] = ((/* implicit */int) arr_41 [i_12]);
                        }
                        arr_52 [(signed char)17] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-124)))) + (((/* implicit */int) arr_48 [i_11] [i_11 + 1] [i_11] [(signed char)17]))))) + (((unsigned int) (+(((/* implicit */int) (signed char)-110)))))));
                    }
                } 
            } 
            var_24 = 3143264058U;
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_6))));
            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_46 [i_9] [i_15] [i_15] [i_15] [i_15] [i_9] [i_9])) : (((/* implicit */int) var_9))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    {
                        arr_59 [i_15] = ((/* implicit */signed char) var_0);
                        arr_60 [i_9] [i_16] |= ((/* implicit */unsigned short) (+(((((/* implicit */int) var_7)) % (((/* implicit */int) var_8))))));
                    }
                } 
            } 
        }
        var_27 ^= ((/* implicit */unsigned int) (_Bool)1);
        var_28 = ((/* implicit */signed char) 2614928446U);
        var_29 = arr_49 [i_9] [(unsigned short)18] [(unsigned short)18];
    }
}
