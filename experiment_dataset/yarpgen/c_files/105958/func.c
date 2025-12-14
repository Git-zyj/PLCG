/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105958
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
    var_18 = ((/* implicit */_Bool) ((unsigned char) var_8));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((max((((/* implicit */long long int) var_2)), (var_14))), (((/* implicit */long long int) min((var_4), (var_3))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_20 = (unsigned char)237;
            arr_4 [i_0] [i_1] [(unsigned char)9] = ((/* implicit */long long int) ((_Bool) (unsigned char)0));
        }
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_13 [i_0] [i_2] [i_3] = (-(((/* implicit */int) var_5)));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) ((long long int) var_1));
                            arr_18 [i_0] [i_2] [i_3] [i_3] [i_0] [i_0] [i_5] = ((/* implicit */short) (!((_Bool)0)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_3] [10ULL] [8LL] [(unsigned char)0] [(unsigned char)2] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))));
                            arr_22 [i_0] [i_2] [i_3] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) ((int) var_1));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_9)) : (127U)))));
                            arr_28 [i_0] [i_2] [(short)8] [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (127U) : (121U)))) ? (((((/* implicit */_Bool) 6587856860850598713LL)) ? (4294967164U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            arr_31 [i_8] [i_3] [14U] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned char) ((((_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) (short)1462))) : ((-(((/* implicit */int) (unsigned char)168))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6587856860850598685LL)) ? ((~(-6587856860850598713LL))) : (((/* implicit */long long int) 4294967163U)))))));
                        }
                        var_23 = ((_Bool) var_15);
                        arr_32 [i_0 - 4] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (var_14) : (((/* implicit */long long int) -1975952525))));
                        arr_33 [i_3] [i_2] [i_2] [i_3] &= ((/* implicit */signed char) ((long long int) var_7));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                var_24 = ((/* implicit */long long int) (+(var_12)));
                arr_38 [i_0] [i_0] [(_Bool)1] [i_9] = ((/* implicit */unsigned int) var_1);
            }
            for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                arr_42 [i_0] [4U] [i_0] = ((unsigned char) var_16);
                arr_43 [i_0] [i_0] [15U] = ((/* implicit */unsigned int) ((unsigned short) var_3));
                var_25 ^= ((/* implicit */short) (-(((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    for (long long int i_12 = 3; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_49 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_12] = ((/* implicit */int) var_13);
                            arr_50 [i_0] [i_2] [i_10] [i_11] [i_0] [i_11] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            var_26 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 6587856860850598713LL)) ? (((/* implicit */int) var_10)) : (var_9))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (var_9)));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7))))));
                        }
                    } 
                } 
                arr_51 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967177U)) ? (100U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (3912685403U)));
            }
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    {
                        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1167))) : (var_13)));
                        arr_57 [6U] [6U] [i_0] = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
        }
        for (signed char i_15 = 1; i_15 < 13; i_15 += 4) 
        {
            arr_62 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
            arr_63 [4ULL] [4ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            arr_64 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) var_2))));
        }
        var_30 = ((/* implicit */signed char) (~(-6587856860850598703LL)));
    }
    for (short i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        var_31 &= var_14;
        arr_67 [i_16] = ((/* implicit */short) var_17);
        arr_68 [i_16] = ((/* implicit */int) min((((((/* implicit */_Bool) 100U)) ? (-6587856860850598714LL) : (6587856860850598726LL))), (((/* implicit */long long int) 127U))));
    }
    var_32 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((_Bool) var_9))) : (min((((/* implicit */int) (short)-30349)), (var_9)))))), (var_12));
}
