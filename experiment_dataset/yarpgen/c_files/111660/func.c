/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111660
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) var_6)))) : (((/* implicit */int) var_15))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_12))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_2))));
            var_22 = ((/* implicit */signed char) ((var_4) + (((/* implicit */unsigned int) var_8))));
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (!(var_10)));
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_17)) / (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) (!((!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5))))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) / ((+(var_13)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_2)))))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (long long int i_8 = 3; i_8 < 16; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 3; i_9 < 17; i_9 += 3) 
                        {
                            var_26 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) * (((var_13) * (var_13))));
                            arr_23 [i_7] = ((/* implicit */short) (+(4161536)));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 4) 
                        {
                            var_27 ^= ((/* implicit */long long int) (((-(var_4))) << (((min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_9)))) + (9694)))));
                            var_28 = ((/* implicit */short) var_7);
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_3))));
                            var_30 = ((/* implicit */signed char) (-(((((/* implicit */int) var_5)) % (var_17)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) var_10);
                            arr_29 [i_0] [i_6] [i_7] [i_8] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_10))));
                        }
                        arr_30 [i_0] [i_0] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) (!((((_Bool)1) || (((/* implicit */_Bool) -4161536))))));
                        var_33 = ((/* implicit */short) ((var_13) >> ((((~(((/* implicit */int) var_11)))) + (24566)))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))) < (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_10)))))))), (((var_7) / (var_17))))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((var_17) / (var_7)))), (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) var_17)))))), ((+(((((/* implicit */unsigned long long int) var_8)) / (var_13)))))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)21442))));
                        var_37 = ((/* implicit */short) (((~(((/* implicit */int) var_1)))) << (((max((var_8), (((/* implicit */int) var_14)))) - (1153236066)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            var_38 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_1))))));
            var_39 &= ((/* implicit */unsigned long long int) var_10);
        }
    }
    for (long long int i_15 = 2; i_15 < 17; i_15 += 1) /* same iter space */
    {
        arr_41 [i_15] = ((/* implicit */unsigned long long int) ((((min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) min((var_11), (var_1)))))) + (2147483647))) << ((((((-(((/* implicit */int) var_0)))) + (10))) - (9)))));
        var_40 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_13))))), (min((((/* implicit */unsigned short) var_10)), (var_6))));
        arr_42 [i_15] = ((/* implicit */long long int) (~(var_7)));
        arr_43 [i_15 + 1] = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(0U)))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (var_8))))))));
    }
    /* vectorizable */
    for (long long int i_16 = 2; i_16 < 17; i_16 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (var_4))))));
        var_42 = ((/* implicit */_Bool) min((var_42), ((!(((/* implicit */_Bool) var_13))))));
        var_43 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */int) var_15))));
    }
    for (long long int i_17 = 2; i_17 < 17; i_17 += 1) /* same iter space */
    {
        arr_50 [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_15)) == (var_12))))));
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (var_12)))) : (((var_3) | (((/* implicit */unsigned long long int) var_17))))));
        var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483628)) ? (14504727790951855490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_13))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 21; i_18 += 2) 
    {
        /* LoopNest 3 */
        for (short i_19 = 2; i_19 < 20; i_19 += 1) 
        {
            for (int i_20 = 1; i_20 < 19; i_20 += 1) 
            {
                for (unsigned char i_21 = 1; i_21 < 17; i_21 += 1) 
                {
                    {
                        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (+(var_8))))));
                        var_48 = ((/* implicit */unsigned char) ((var_7) ^ (var_17)));
                    }
                } 
            } 
        } 
        var_49 = ((/* implicit */unsigned long long int) var_4);
    }
    var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_14), ((!(((/* implicit */_Bool) var_11)))))))) ^ (var_4)));
    var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) var_15))));
}
