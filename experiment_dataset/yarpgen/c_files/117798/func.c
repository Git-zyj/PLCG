/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117798
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = var_9;
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1969197981U)) ? (((/* implicit */unsigned long long int) 4086601985U)) : (17052715145124225080ULL)))) ? (((/* implicit */unsigned long long int) 2325769340U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_10)))));
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) == (1969197966U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((-5510626399666554454LL) != (var_11))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) ((var_2) > (((/* implicit */int) var_9))));
                }
            } 
        } 
    }
    for (int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1763795927)), (1572864U)));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_8)))) ? (((/* implicit */unsigned long long int) (-(var_11)))) : ((~(var_10))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_19 |= ((min((((((/* implicit */_Bool) var_5)) ? (17421953680628245966ULL) : (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_11)))))) | (min((((((/* implicit */_Bool) var_8)) ? (var_10) : (var_8))), (((/* implicit */unsigned long long int) -948899900)))));
        var_20 = ((/* implicit */long long int) var_3);
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_26 [i_4] [i_4] [18ULL] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)73)) ? (((5510626399666554459LL) + (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) min((var_12), (((/* implicit */int) var_9)))))))), (var_8)));
                        var_21 = ((/* implicit */unsigned int) var_7);
                    }
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) var_5);
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((min((((/* implicit */int) var_4)), (var_2))) < (1558231846))))));
                        var_24 = var_9;
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((2325769357U), (2325769340U)))) ? (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((min((-5510626399666554444LL), (((/* implicit */long long int) var_6)))) + (((((/* implicit */long long int) 4040084116U)) | (var_11)))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(2325769352U))))));
                        arr_32 [i_4] [i_4] [i_4] [i_4] [i_9] = ((/* implicit */short) ((min((((/* implicit */int) var_1)), (var_12))) == (((/* implicit */int) var_7))));
                    }
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_9)) - (33)))))) | (3878122733U)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (10215656133660310937ULL)))));
                        arr_35 [i_4] [i_10] = ((/* implicit */unsigned long long int) var_5);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        arr_38 [9ULL] [5] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) | (var_8))), (min((((/* implicit */unsigned long long int) var_11)), (12441460252848775667ULL)))));
                        var_28 += ((/* implicit */unsigned char) var_2);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) -1)));
                        arr_43 [i_5] &= ((/* implicit */unsigned long long int) ((948899918) < (((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (var_4)));
                            var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                            var_32 = ((/* implicit */long long int) var_2);
                        }
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) var_12))));
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) var_6))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((var_10), (var_3))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184)))))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 10594798885614423518ULL))))), (var_1))))));
                        }
                        for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned char) ((min((var_8), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) min((10796754205359070332ULL), (min((((/* implicit */unsigned long long int) var_2)), (var_8))))))));
                            arr_57 [(unsigned char)15] [(unsigned char)15] [i_16] [i_14] [11ULL] = ((/* implicit */unsigned int) 2234207627640832ULL);
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) min((((/* implicit */long long int) var_4)), (-5510626399666554459LL))))));
                        }
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_6)), (var_8))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (var_2))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2709671287171096548ULL)) ? (728538967546149889ULL) : (2216640722420953857ULL))))));
                    }
                    var_40 += ((/* implicit */short) -9223372036854775793LL);
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned long long int) var_7);
    var_42 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 3013221463170308869LL)) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))) != (var_6))))) : (min((var_10), (((/* implicit */unsigned long long int) -149801847352185646LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (min((((/* implicit */long long int) (unsigned char)255)), (-5510626399666554472LL))))))));
    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16383ULL)) ? (var_12) : (((/* implicit */int) var_0))));
}
