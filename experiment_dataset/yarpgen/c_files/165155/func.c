/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165155
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
    var_16 = ((/* implicit */signed char) var_15);
    var_17 &= ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (13495487939595958570ULL))))))));
                    var_19 = ((/* implicit */_Bool) var_10);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            arr_17 [(_Bool)1] [i_3] = ((/* implicit */long long int) arr_0 [i_3] [(unsigned short)3]);
            arr_18 [i_3] = ((/* implicit */unsigned int) arr_12 [i_3] [i_4]);
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_20 += ((/* implicit */short) var_14);
            var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_5]))));
            var_22 = ((/* implicit */int) var_4);
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) (((-(((/* implicit */int) var_3)))) < (1367121650)))) : (((/* implicit */int) var_14))));
            arr_24 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (-(var_8)))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5435838755200726329LL))))))));
            /* LoopSeq 4 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                arr_29 [i_3] [i_3] = ((/* implicit */unsigned short) max((var_15), (((/* implicit */long long int) var_7))));
                var_25 = ((/* implicit */unsigned short) arr_19 [i_3] [i_3]);
                arr_30 [i_3] [i_3] [i_6] [i_7] = ((/* implicit */signed char) (short)32767);
                arr_31 [(short)4] [i_6] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_0))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned short) var_6);
                            var_28 = var_7;
                        }
                    } 
                } 
                var_29 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)12288)) > (((/* implicit */int) (short)32747)))))));
            }
            /* vectorizable */
            for (short i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                arr_41 [i_11] [i_6] [i_11] &= var_0;
                var_30 = ((/* implicit */long long int) var_6);
                var_31 = ((((/* implicit */int) (unsigned short)51322)) | (((/* implicit */int) (_Bool)1)));
            }
            for (long long int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_3]))));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_3)))))) : (min((var_8), (((/* implicit */unsigned long long int) 4294967283U))))));
            }
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    {
                        arr_52 [i_3] [i_6] [i_13] [i_13] = ((/* implicit */short) var_13);
                        arr_53 [i_3] [i_3] [i_13] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_13] [i_13]))) % (12954847514419439632ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_4)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            var_34 = ((/* implicit */_Bool) (+(var_1)));
            arr_56 [(unsigned short)10] &= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
            var_35 = ((/* implicit */unsigned short) ((short) var_5));
        }
        var_36 ^= ((/* implicit */short) (-(((/* implicit */int) (signed char)78))));
        var_37 = ((/* implicit */long long int) (signed char)-92);
    }
    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) 
    {
        arr_61 [i_16] &= ((/* implicit */signed char) var_8);
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 23; i_19 += 2) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
                        {
                            {
                                var_39 &= ((/* implicit */long long int) (unsigned short)23937);
                                var_40 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (unsigned short)41567)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */int) var_13))));
                                var_41 = ((/* implicit */int) min((var_41), ((~(((/* implicit */int) arr_69 [i_16] [i_17] [i_18] [i_19] [i_20]))))));
                                arr_72 [i_16] [i_16] [i_18] [i_19] [i_20] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), ((+(((int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_65 [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) arr_65 [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) 
                    {
                        for (int i_22 = 0; i_22 < 23; i_22 += 3) 
                        {
                            {
                                var_43 = ((/* implicit */long long int) var_4);
                                var_44 *= ((/* implicit */unsigned char) (((~(-1367121672))) | ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_15)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_45 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 15; i_23 += 3) 
    {
        var_46 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? ((-(((/* implicit */int) (short)-7810)))) : (((/* implicit */int) var_14))));
        arr_80 [i_23] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    }
    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? ((-((-(var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9))))))));
}
