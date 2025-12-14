/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113090
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
    var_18 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_15)))))))));
    var_19 = ((/* implicit */unsigned short) (-((+((-(((/* implicit */int) (short)-20604))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */short) (~((-((~(((/* implicit */int) (short)32767))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-1)))))))));
                    arr_8 [i_2] [(_Bool)1] [(short)9] = ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(arr_5 [i_0]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_22 = (-((-(((/* implicit */int) (short)32767)))));
                            arr_23 [i_0] [i_0] [i_3] [(_Bool)1] [i_5] [i_3] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_23 -= (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3] [i_3] [(short)0]))))));
                var_24 = ((/* implicit */unsigned char) (~(3748472479U)));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 14; i_8 += 3) 
                {
                    for (short i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) (-((-(var_16)))));
                            arr_32 [i_8] [17U] [i_7] [(_Bool)1] [i_8] = ((/* implicit */short) (+((+(((/* implicit */int) (short)-17427))))));
                            var_26 = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                arr_36 [i_0] [i_3] [i_10] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_6))))));
                var_27 = ((/* implicit */_Bool) (-((~(var_16)))));
                var_28 ^= (!((_Bool)1));
            }
            for (int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                var_29 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_11]))))));
                var_30 += ((/* implicit */short) (!((!(((/* implicit */_Bool) -2147483637))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_31 = (-((~(arr_44 [i_0] [i_3] [i_11] [i_11] [i_12] [i_13]))));
                            arr_46 [i_11] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)65535))))));
                            var_32 *= ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 3; i_14 < 16; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_33 = (-((-(((/* implicit */int) arr_34 [(unsigned char)8] [i_3])))));
                            var_34 &= ((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)19349))))));
                            var_35 *= (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
                        }
                    } 
                } 
                var_36 += (~((-(((/* implicit */int) (_Bool)1)))));
            }
            for (short i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (int i_18 = 2; i_18 < 16; i_18 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-19336)))))));
                            arr_59 [i_0] [(_Bool)1] = ((/* implicit */short) (+((+((-2147483647 - 1))))));
                        }
                    } 
                } 
                arr_60 [16U] [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-14042)))))));
            }
            var_38 = ((/* implicit */_Bool) (-((~(-4414904974470304270LL)))));
        }
        for (int i_19 = 1; i_19 < 15; i_19 += 4) /* same iter space */
        {
            arr_63 [i_19] = ((/* implicit */unsigned short) (~((-((-(((/* implicit */int) (short)-7196))))))));
            var_39 = ((/* implicit */unsigned int) (-((+((+(((/* implicit */int) var_6))))))));
            var_40 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
            var_41 = (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_19 + 3] [i_19]))))))));
            arr_64 [i_19] = ((/* implicit */short) (+((-2147483647 - 1))));
        }
        /* vectorizable */
        for (int i_20 = 1; i_20 < 15; i_20 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
            var_43 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_12 [i_0] [i_20]))))));
            arr_67 [(short)9] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 2922996283U))))));
            var_44 = ((/* implicit */int) (~(1575820473U)));
        }
        /* LoopNest 2 */
        for (short i_21 = 2; i_21 < 17; i_21 += 4) 
        {
            for (unsigned int i_22 = 0; i_22 < 18; i_22 += 3) 
            {
                {
                    arr_73 [i_0] = ((/* implicit */long long int) (-((-((-(((/* implicit */int) arr_49 [i_0] [i_21] [(unsigned char)4] [i_21] [i_0]))))))));
                    var_45 += ((/* implicit */short) (-((-((-(1644483623)))))));
                }
            } 
        } 
    }
    for (long long int i_23 = 0; i_23 < 18; i_23 += 2) /* same iter space */
    {
        arr_76 [(short)17] [i_23] &= ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
        var_46 += ((/* implicit */short) (-((-((-(((/* implicit */int) (short)(-32767 - 1)))))))));
        var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (short)19349)))))))));
        var_48 += (-((-(((/* implicit */int) (!((_Bool)1)))))));
        /* LoopSeq 4 */
        for (unsigned int i_24 = 0; i_24 < 18; i_24 += 4) 
        {
            var_49 *= ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)7193))))));
            arr_81 [i_23] [i_24] [i_24] = ((/* implicit */short) (+((+((-(((/* implicit */int) (short)-7196))))))));
            /* LoopNest 2 */
            for (unsigned char i_25 = 0; i_25 < 18; i_25 += 4) 
            {
                for (int i_26 = 0; i_26 < 18; i_26 += 3) 
                {
                    {
                        var_50 &= ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(0U))))))));
                        arr_87 [i_26] [i_24] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                        arr_88 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))));
                        /* LoopSeq 1 */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            arr_92 [i_23] [i_23] [i_27] [i_25] [i_26] [i_27] [i_27] = ((/* implicit */short) (-((~(((/* implicit */int) (short)14042))))));
                            arr_93 [i_23] [8U] [i_24] [i_26] [i_24] &= ((/* implicit */long long int) (-((-((~(((/* implicit */int) (short)30867))))))));
                            var_51 = (!(((/* implicit */_Bool) (-((~(1146229784U)))))));
                        }
                    }
                } 
            } 
            arr_94 [i_23] [i_24] = ((/* implicit */unsigned char) (~((-((-(arr_29 [i_23] [i_24] [i_23] [(_Bool)1])))))));
        }
        for (int i_28 = 1; i_28 < 16; i_28 += 2) 
        {
            var_52 = ((/* implicit */short) (-((-((-(arr_0 [i_23])))))));
            var_53 *= ((/* implicit */unsigned int) (~((-((-(var_10)))))));
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_30 = 0; i_30 < 18; i_30 += 3) 
            {
                var_54 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(var_1))))))));
                var_55 *= (-((+((-(1371971037U))))));
            }
            /* LoopNest 2 */
            for (short i_31 = 0; i_31 < 18; i_31 += 3) 
            {
                for (short i_32 = 1; i_32 < 14; i_32 += 3) 
                {
                    {
                        var_56 = (-((-((~(var_7))))));
                        var_57 = (!(((/* implicit */_Bool) (-((-(arr_104 [i_23] [9] [i_23])))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_33 = 1; i_33 < 17; i_33 += 2) 
            {
                for (short i_34 = 0; i_34 < 18; i_34 += 3) 
                {
                    for (unsigned char i_35 = 2; i_35 < 17; i_35 += 3) 
                    {
                        {
                            arr_117 [i_29] [i_33] [i_34] [i_35] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))));
                            var_58 ^= ((/* implicit */int) (-(1109460576U)));
                            arr_118 [i_29] [i_33] [i_33] [i_33] = ((/* implicit */short) (-((-((~(((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_36 = 1; i_36 < 17; i_36 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_37 = 2; i_37 < 17; i_37 += 4) 
            {
                for (int i_38 = 0; i_38 < 18; i_38 += 2) 
                {
                    for (unsigned int i_39 = 2; i_39 < 16; i_39 += 2) 
                    {
                        {
                            var_59 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
                            arr_128 [i_36] [i_36] [2] [i_38] [i_36] = ((/* implicit */short) (-((-((-(((/* implicit */int) var_15))))))));
                            var_60 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                            arr_129 [i_36] [i_36] [i_36] = ((/* implicit */short) (-((-((-(((/* implicit */int) var_3))))))));
                            arr_130 [i_36] [i_38] [i_36] = ((/* implicit */unsigned short) (-((-((~(((/* implicit */int) (short)8421))))))));
                        }
                    } 
                } 
            } 
            var_61 ^= ((/* implicit */short) (~((~((-(((/* implicit */int) arr_108 [i_23] [i_23] [i_23] [i_23]))))))));
            var_62 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55228)))))))));
        }
    }
}
