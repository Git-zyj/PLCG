/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120818
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
    var_17 -= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)10898))))), (var_15))), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_14)))) ? (var_8) : ((-(var_8)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-10898))))) : (max((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) var_11))))), (var_0)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) max((var_12), (var_16))))));
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((var_2) >> (((((/* implicit */int) var_11)) - (175)))))) >= ((~(var_3))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_11 [i_2] = (!(((/* implicit */_Bool) (short)-10898)));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            var_19 = ((/* implicit */short) (+(((/* implicit */int) var_16))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_7)))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */short) var_0);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_11)))))));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) && (var_9)));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 1; i_8 < 21; i_8 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) (+(var_6)));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */int) min((var_25), ((+((+(((/* implicit */int) var_13))))))));
                            var_26 += (!(((/* implicit */_Bool) var_5)));
                            arr_38 [i_8] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                        }
                    } 
                } 
                arr_39 [i_8] [i_2] [i_8 + 3] [i_8] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)10900))))));
            }
            for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                var_27 |= ((/* implicit */unsigned long long int) (~(var_5)));
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_28 -= ((/* implicit */unsigned int) var_4);
                    var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) || ((!(((/* implicit */_Bool) var_1))))));
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_30 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                        var_31 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
                        arr_49 [i_8] [i_14] [i_12] [i_13] [i_12] [i_8 + 3] [i_8] = ((/* implicit */unsigned char) (+(var_10)));
                    }
                    for (unsigned int i_15 = 3; i_15 < 23; i_15 += 1) 
                    {
                        var_32 *= ((/* implicit */_Bool) (+(-868527897)));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_12))) ^ (((/* implicit */int) var_4)))))));
                    }
                    for (unsigned long long int i_16 = 2; i_16 < 22; i_16 += 1) 
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_16)))))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_11))));
                    }
                }
            }
            var_36 = ((/* implicit */int) ((unsigned char) var_3));
            var_37 = ((var_9) && (((/* implicit */_Bool) var_0)));
            var_38 = ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))))) >> (((var_5) + (1174293256))));
        }
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    {
                        arr_64 [(_Bool)1] [i_17] |= ((/* implicit */unsigned char) (-(var_15)));
                        var_39 = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) / (-177482542))) + (((int) var_15))));
                    }
                } 
            } 
            var_40 += ((/* implicit */long long int) ((unsigned char) 1276735388U));
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */unsigned int) (-2147483647 - 1))) % (122880U))))));
            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((unsigned char) ((short) var_2))))));
            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
        }
        var_44 *= ((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_11)) : (var_2)));
    }
}
