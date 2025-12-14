/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106991
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 1915197789U)) ? (7749991058023423699LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2379769506U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1978382626U)) ? (2379769506U) : (2379769506U)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((2379769517U) > (((/* implicit */unsigned int) 2147481600)))))))) ? (((4203429003U) % (((1978382626U) * (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_13 [i_0] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41342)) / (((/* implicit */int) (unsigned short)65535))))) / (((8796093020160ULL) * (((/* implicit */unsigned long long int) 1915197789U))))))));
                        arr_14 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9814)) + (((/* implicit */int) (signed char)-121))))), (min((((/* implicit */unsigned int) (unsigned char)56)), (3897708685U)))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)-32760), ((short)-32757)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2316584672U)), (10316154416243982117ULL)))) ? (((1915197797U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-27991))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)10)) >> (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) ((2316584671U) <= (((/* implicit */unsigned int) 32767))))) : (((/* implicit */int) (_Bool)1)))))));
                            arr_18 [i_0] [i_0] [2U] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)208)) / (((/* implicit */int) (_Bool)1)))) + ((+(((/* implicit */int) (signed char)0))))))) ? (((min((2316584671U), (((/* implicit */unsigned int) (_Bool)1)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-43))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)20217))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)152)))))))))));
                            var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-98)) || (((/* implicit */_Bool) (unsigned char)237))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25)))))));
                            var_13 = ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : (min((((/* implicit */unsigned int) (unsigned char)8)), (481308666U))));
                            var_14 = ((/* implicit */short) ((((min((2379769507U), (((/* implicit */unsigned int) (unsigned short)21766)))) < (2915958600U))) || (((/* implicit */_Bool) 91538281U))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((16711680U) == (16711674U)));
                            arr_22 [10U] [10U] [i_1] [(short)8] [(unsigned short)8] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2379769507U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))))))) / (((2448921032173029413ULL) % (((/* implicit */unsigned long long int) -2192409271543861990LL))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) 2379769497U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) : (18446744073709551596ULL))))));
                        }
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)244))))) && (((/* implicit */_Bool) 140737488355327ULL))))) > ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (signed char)120)) < (-2129853534)))) : (((/* implicit */int) (signed char)115))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-117)), ((unsigned char)12)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)59974))))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) (short)-29799)) + (((/* implicit */int) (signed char)59))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) << (((2192409271543861989LL) - (2192409271543861968LL)))))), (min((((/* implicit */long long int) 16777214U)), (3776463744685998823LL)))))));
                        arr_25 [i_6] [i_2] [i_1] [i_6] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (18446603336221196300ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((10304969612597514233ULL) / (((/* implicit */unsigned long long int) 3625054058U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)8151), (((/* implicit */unsigned short) (signed char)-65)))))))), (((/* implicit */unsigned long long int) (unsigned char)0)));
                        var_18 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (140737488355342ULL))), (min((5521363921784967084ULL), (((/* implicit */unsigned long long int) 4169508784U)))))), (((/* implicit */unsigned long long int) ((1381123440U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6356747604288323782LL)))))))))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((14684953990952783762ULL), (min((((/* implicit */unsigned long long int) 6356747604288323782LL)), (12925380151924584532ULL)))));
                        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-16327)), (min((min((15406611246455941247ULL), (((/* implicit */unsigned long long int) (signed char)72)))), ((~(3761790082756767867ULL)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6356747604288323783LL)) && (((/* implicit */_Bool) 2147483639))))), (min((12960329944022176559ULL), (10304969612597514219ULL)))))) && (((min(((_Bool)1), ((_Bool)1))) && ((!((_Bool)1)))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) (((_Bool)1) ? (125458502U) : (4294967295U)))) % (4346317880132223248ULL)))));
                        arr_32 [i_0] [i_1] [(unsigned char)4] [i_8] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 15090961587028832048ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3419398741U)) ? (227727956U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 875568569U)) ? (3923314619U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20921)))))), ((+(12960329944022176532ULL)))))));
                        arr_33 [(unsigned short)2] [10LL] [(short)2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)14164))))), (((((/* implicit */_Bool) min((4067239325U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (signed char)-73))))) : ((+(12960329944022176559ULL)))))));
                    }
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11835)) + (((/* implicit */int) (_Bool)1))))) ? (((3121803197U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)61))) <= (-692172344374163746LL))))))) >> ((+(((/* implicit */int) (_Bool)1))))));
                        arr_37 [(unsigned char)6] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((2644978604353522723ULL), (((/* implicit */unsigned long long int) 22U))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1993750754174806359ULL)) || (((/* implicit */_Bool) 15728640U)))))) > (-84611713677929688LL)));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(268435455U)))) / (min((-70368744177664LL), (((/* implicit */long long int) (signed char)63))))))) ? (min((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-74)))), (min((84611713677929688LL), (((/* implicit */long long int) (signed char)119)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 16452993319534745256ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16452993319534745257ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-104)))))))))));
                    }
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (short)-125))));
                    arr_41 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8389))) / (8645067591300314350ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)66))));
}
