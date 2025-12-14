/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152051
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */short) (+(6198799626328841002LL)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (signed char)(-127 - 1))))));
                            var_12 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2])))))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((unsigned long long int) ((unsigned short) (_Bool)1))))));
                            var_14 = (+(((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_4])) & (arr_7 [i_2] [i_1] [i_2] [i_3]))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_16 [i_0] [13] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_4)))));
                            var_15 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-95)))) | (((/* implicit */int) ((_Bool) 472433764)))));
                            arr_17 [i_0] [i_2] [i_0] [i_3] [i_0 - 3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (short)-21))))))));
                            arr_18 [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) var_3)), ((-(arr_1 [i_0])))));
                        }
                        arr_19 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                                arr_26 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((min((423994652), ((+(((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_27 [i_0] [i_1] [i_1] [18ULL] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */short) (signed char)119)), (var_0)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        arr_30 [i_0 + 2] [i_8] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) min(((~(-34747998328910001LL))), (((/* implicit */long long int) var_0))))), ((-(12881464907617045601ULL)))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((36086429) << (((((-356513615) + (356513621))) - (4)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)-11096)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_8))))))));
                            arr_33 [i_9] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)24910)));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned long long int) ((15021616913607401730ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)44712)) ? (arr_4 [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_0 + 2] [i_0]))))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (max(((unsigned short)40722), (((/* implicit */unsigned short) (signed char)127))))))) ? ((-(((/* implicit */int) arr_28 [i_0] [i_2] [i_2] [i_8])))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || ((_Bool)1)))) : (((/* implicit */int) min(((unsigned short)8190), (((/* implicit */unsigned short) var_0))))))))))));
                        }
                        /* LoopSeq 4 */
                        for (short i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) (-(arr_21 [i_0] [i_1] [i_2] [i_0])));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_0 + 2] [i_1] [i_0 + 2] [i_8])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)9345))))) : (((((/* implicit */_Bool) var_6)) ? (34326183936ULL) : (((/* implicit */unsigned long long int) 2147483641))))));
                        }
                        for (short i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2)))) >= (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7)))) > (((/* implicit */int) (unsigned short)8177)))))));
                            var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) (unsigned short)8171))), (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (18446744039383367675ULL)));
                            arr_38 [i_0] [i_1] [i_2] [i_0] [i_8] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), ((~(((/* implicit */int) ((short) var_0)))))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_24 |= ((/* implicit */_Bool) var_4);
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((_Bool) (+((~(var_6)))))))));
                            var_26 = min(((((_Bool)1) ? ((~(((/* implicit */int) (signed char)121)))) : (((/* implicit */int) (short)-3619)))), (((/* implicit */int) (_Bool)1)));
                            var_27 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                        }
                        for (int i_13 = 3; i_13 < 17; i_13 += 2) 
                        {
                            arr_46 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            arr_47 [i_0] [i_1] [i_1] [i_0] [i_1] = ((((_Bool) min((((/* implicit */unsigned short) (signed char)14)), ((unsigned short)8175)))) ? (min((((/* implicit */int) var_8)), (arr_37 [i_13 + 2] [i_13] [i_2] [i_2] [i_2] [i_1] [i_0]))) : ((+((~(((/* implicit */int) (short)32728)))))));
                        }
                    }
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        arr_51 [i_0] [i_1] [i_1] [i_2] [i_14] = ((short) (+(-1)));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) (signed char)117)) - (((/* implicit */int) (signed char)-22)))))))))));
                    }
                    arr_52 [i_0] = (-(((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_29 = min((((/* implicit */short) (!(var_7)))), (var_1));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        for (short i_16 = 1; i_16 < 17; i_16 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    for (unsigned char i_18 = 3; i_18 < 17; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            {
                                arr_65 [i_16] [i_16] = ((/* implicit */long long int) 17179869183ULL);
                                var_30 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)65531))))));
                                var_31 = ((min((((var_8) ? (((/* implicit */int) arr_2 [(unsigned short)7])) : (((/* implicit */int) (signed char)9)))), (((/* implicit */int) ((unsigned short) (signed char)120))))) == (min((((((/* implicit */_Bool) (signed char)93)) ? (-3) : (((/* implicit */int) (signed char)103)))), (((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) var_3)) : (-109019276))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 3; i_20 < 17; i_20 += 2) 
                {
                    for (short i_21 = 4; i_21 < 17; i_21 += 4) 
                    {
                        {
                            arr_71 [i_16] [(unsigned short)6] [i_15] = ((/* implicit */short) arr_28 [i_15] [i_16 + 2] [i_16 + 2] [i_21]);
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((int) var_1)))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((unsigned short) (signed char)-23)))))) >> ((((+(-4371811983143684449LL))) + (4371811983143684473LL)))));
                            var_34 -= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50795)) ? (2030057140) : (arr_68 [i_15])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5667499476427985978ULL)) ? (((/* implicit */unsigned long long int) -2030057141)) : (12684149691457815017ULL))))))));
                            var_35 &= (short)8064;
                        }
                    } 
                } 
            }
        } 
    } 
}
