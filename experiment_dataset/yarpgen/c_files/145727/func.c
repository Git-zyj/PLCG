/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145727
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
    var_20 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_11)))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 0)))))), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) (unsigned short)31)))), ((!(((/* implicit */_Bool) var_14)))))))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~((~(4194288)))))), (min((min((((/* implicit */long long int) var_2)), (var_17))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_17))))));
            var_23 = ((/* implicit */int) (~((-(var_11)))));
            var_24 = ((/* implicit */_Bool) (-(-4194288)));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_25 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_0]))))));
            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)18)))))));
            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
            arr_8 [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_1 [i_0]))))));
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_28 &= ((/* implicit */int) (!(((/* implicit */_Bool) (~(32767LL))))));
                    var_29 = ((/* implicit */long long int) (-(-4194266)));
                }
                var_30 = (-((-(((/* implicit */int) var_15)))));
            }
            arr_16 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)24576))))));
            var_31 = ((/* implicit */long long int) max((var_31), ((~((+(1LL)))))));
            var_32 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_9 [i_0] [i_3]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0])))))));
                    var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
        arr_24 [i_0] [(_Bool)1] = ((/* implicit */_Bool) (~((-(16LL)))));
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_35 -= ((/* implicit */long long int) (-((-(arr_27 [i_8] [i_8])))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            var_36 -= ((/* implicit */_Bool) (+((+(-4194289)))));
            var_37 = ((/* implicit */short) (-((-(504U)))));
        }
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 13; i_10 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned int) (~(134217727)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (unsigned char i_12 = 3; i_12 < 14; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_14 = 0; i_14 < 17; i_14 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) (~((-(4194288)))));
                            arr_45 [6] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7))))));
                            var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [16LL] [i_11] [(unsigned char)0] [i_14])))))));
                            var_41 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-25344))))));
                        }
                        for (long long int i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
                        {
                            var_42 = (-((~(var_10))));
                            var_43 = ((/* implicit */int) (~((~(var_13)))));
                            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) (~((+(8122515589780823953LL))))))));
                        }
                        for (long long int i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                        {
                            var_45 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_17))))));
                            var_46 = (+(((/* implicit */int) (!((_Bool)1)))));
                        }
                        for (long long int i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                        {
                            var_47 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-6982255567043362051LL))))));
                            var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                        }
                        var_49 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_47 [i_10] [i_10] [i_10] [i_10]))))));
                    }
                } 
            } 
        } 
    }
}
