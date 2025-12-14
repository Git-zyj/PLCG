/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149014
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (var_0) : (var_6))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_6)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6686))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2062342110U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58849)) ? (var_8) : (var_2)))) ? (((var_11) ? (((/* implicit */long long int) 48U)) : (6562120915919789379LL))) : (((/* implicit */long long int) 133169152U))));
                        arr_11 [i_0] [i_0] [(unsigned char)0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50989)) - (((/* implicit */int) var_5))));
                        arr_12 [i_0] [(short)8] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)20396)) != (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_4))))));
                    }
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) var_7))), (((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (_Bool)1))))) >> (((((var_6) * (4252392901U))) - (1185278866U)))))));
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -4158855888673044387LL);
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned int) var_12);
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4158855888673044387LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4294967248U))))));
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 18; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294967248U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_5)))), (((((/* implicit */int) var_4)) % (((/* implicit */int) var_10))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967248U)) ? (((((((/* implicit */_Bool) 4294967223U)) ? (2280763104U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) != (6562120915919789373LL)))), (((int) var_13)))))));
                            }
                        } 
                    } 
                    arr_33 [i_5 - 1] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)56)) % ((~(min((-710271101), (((/* implicit */int) var_4))))))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        arr_36 [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        arr_37 [i_10] [i_6] [i_6] [i_6] = ((/* implicit */int) min(((_Bool)1), (var_11)));
                    }
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_23 = 3533818155U;
                        arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((311849273U) % (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_3)))) < (((/* implicit */int) ((_Bool) (_Bool)1)))))))));
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 2; i_12 < 16; i_12 += 3) 
                        {
                            arr_44 [i_5 - 1] [i_5 - 1] [i_7] [i_5 - 1] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))) : (1633889581U))))));
                            arr_45 [i_6] [i_12] [i_6] = ((/* implicit */short) var_12);
                            arr_46 [i_5] [i_6] [i_12] [i_12] = ((/* implicit */unsigned short) ((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (1786918732))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) / (811913318U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1786918733))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10214)))))));
                            arr_47 [i_12] [i_6] [i_7 - 2] [1U] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) (~(-1786918738))))));
                        }
                    }
                    var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) <= (min((0U), (((/* implicit */unsigned int) (unsigned short)65528))))));
                }
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) var_5);
                    var_28 = (((+(((/* implicit */int) (unsigned char)139)))) < (((/* implicit */int) (_Bool)1)));
                }
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) != (6562120915919789397LL)))));
                arr_50 [11U] [(short)14] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
