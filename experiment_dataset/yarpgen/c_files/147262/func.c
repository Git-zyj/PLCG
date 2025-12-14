/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147262
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) var_9);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63211))))) - (((/* implicit */int) max((((/* implicit */unsigned short) max((var_9), (((/* implicit */signed char) (_Bool)0))))), (var_5)))));
                            var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (min((arr_2 [i_0] [i_1] [i_2]), (((/* implicit */int) var_13)))) : (((/* implicit */int) (short)-15381)))))))));
                        }
                        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -2437409971313754798LL)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 + 1]))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1]))));
                        var_20 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)198)))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_10))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_6] [i_6] [i_0] [i_0 + 1] [i_0] [i_0]))));
                        var_22 = ((/* implicit */int) (~(var_2)));
                        var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-56)))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(-1563447191))))));
                    var_25 = ((/* implicit */_Bool) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))));
                    var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_12))) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_27 += ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned short) (signed char)-112))));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)26100), (((/* implicit */short) arr_3 [i_8 - 1] [i_8 + 1]))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((var_12) & (var_11)))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_11))))))));
                            var_29 += ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)31727)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */signed char) (_Bool)1))))))))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned short)33809)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */long long int) var_8);
        }
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & ((+(216172782113783808LL)))));
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0] [i_11] [i_0 + 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
        }
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (2496036539031340106LL))))));
            var_35 += (-(((/* implicit */int) (short)-31733)));
        }
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
    {
        var_36 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7729901966802413080LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_21 [i_13 + 1] [i_13] [i_13])))));
        var_37 = (i_13 % 2 == zero) ? (((/* implicit */_Bool) (((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((((/* implicit */_Bool) 54155202)) ? (((/* implicit */int) arr_28 [i_13] [i_13] [i_13] [i_13] [i_13 + 1] [i_13] [i_13])) : (((/* implicit */int) arr_34 [i_13]))))))) : (((/* implicit */_Bool) (((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((((((/* implicit */_Bool) 54155202)) ? (((/* implicit */int) arr_28 [i_13] [i_13] [i_13] [i_13] [i_13 + 1] [i_13] [i_13])) : (((/* implicit */int) arr_34 [i_13])))) - (1))))));
        var_38 += ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_24 [(_Bool)1] [i_13])), (var_12)))));
        var_39 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-83565583), (((/* implicit */int) (signed char)-56))))) ? (((((/* implicit */_Bool) (signed char)77)) ? (0) : (((/* implicit */int) (signed char)-78)))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)33808)) : ((~(((/* implicit */int) var_1))))));
        var_40 = ((/* implicit */int) min((var_40), ((~((+((-(83565572)))))))));
    }
    var_41 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((var_2) - (((/* implicit */unsigned long long int) -2047393439)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((((-(-7248459398335884566LL))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_9))))))));
    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) var_2))));
    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) min((var_10), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_11)), (var_2))))))))));
    /* LoopSeq 2 */
    for (int i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
    {
        var_44 += ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_1)))) : (max((((/* implicit */int) var_13)), ((~(((/* implicit */int) (unsigned short)33808)))))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) min((var_45), ((_Bool)1)));
                        /* LoopSeq 3 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_46 -= ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_5))))));
                            var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31727))));
                            var_48 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            var_49 = ((/* implicit */int) min((var_49), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 83565604)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_4)) : ((((_Bool)1) ? (((((/* implicit */_Bool) -83565583)) ? (0) : (((/* implicit */int) (_Bool)1)))) : (54155202)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) (_Bool)1))));
                            var_51 = ((/* implicit */unsigned char) (unsigned short)31732);
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            var_52 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((-83565583) <= (((/* implicit */int) (_Bool)1))))) : ((+(((/* implicit */int) arr_43 [i_14] [i_17 + 1]))))));
                            var_53 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_45 [i_14] [i_14] [i_14] [i_14])) : (-83565581))))))));
                        }
                    }
                } 
            } 
        } 
        var_54 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)12514)), (((-1) / (((/* implicit */int) arr_39 [i_14]))))));
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned short i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                {
                    var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8589934591ULL)) ? (((/* implicit */int) ((1824377284719061513LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))) : (((((/* implicit */int) arr_40 [i_14])) | (((/* implicit */int) var_6)))))))));
                    var_56 = ((min(((_Bool)1), ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (var_13))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_19 [i_22]))));
                    var_57 += ((/* implicit */int) min((min((max((7901748335663219795LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min((var_12), (((/* implicit */int) (short)12590))))))), (((/* implicit */long long int) ((((int) var_0)) > (((/* implicit */int) var_6)))))));
                }
            } 
        } 
    }
    for (int i_23 = 0; i_23 < 21; i_23 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 21; i_24 += 1) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_58 = ((/* implicit */long long int) (_Bool)0);
                    var_59 = (~((~(min((var_3), (-7901748335663219795LL))))));
                }
            } 
        } 
        var_60 = ((/* implicit */_Bool) (~(-7901748335663219815LL)));
    }
}
