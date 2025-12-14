/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1868
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) ((unsigned int) ((short) max((((/* implicit */unsigned long long int) var_4)), (var_1)))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((max((var_7), (((/* implicit */unsigned long long int) (signed char)-53)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)101), ((signed char)-107))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((int) ((((/* implicit */_Bool) 4385982792292147187ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2995808484U)))) <= (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2995808484U))));
                    arr_13 [i_4] [i_3] [i_2 - 1] = ((/* implicit */short) ((unsigned short) (+((-(((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) 742673574722240971ULL);
    /* LoopSeq 3 */
    for (unsigned int i_5 = 4; i_5 < 22; i_5 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (unsigned short)24545)), ((-(((/* implicit */int) var_3))))))));
        var_15 = ((/* implicit */short) var_5);
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        arr_20 [i_6] [4ULL] = ((/* implicit */signed char) var_6);
        var_16 = ((/* implicit */unsigned int) ((var_1) <= (((/* implicit */unsigned long long int) -427852387))));
    }
    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 2) 
    {
        arr_23 [(short)11] = ((/* implicit */unsigned long long int) max(((+(((unsigned int) var_8)))), (max((((/* implicit */unsigned int) (short)-20147)), (2360464287U)))));
        var_17 = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)42)))) * ((-(((/* implicit */int) var_4))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (signed char)1))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_4)), (587910857))))) : (((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) 2360464316U);
            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (signed char)-52)))));
            arr_26 [i_7 - 1] = 15391008956487510278ULL;
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 11; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    for (unsigned char i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        {
                            arr_36 [i_7] [i_7 - 1] [i_7] [(signed char)9] [i_7] = ((/* implicit */unsigned int) ((min((var_7), (max((8027213296906019186ULL), (((/* implicit */unsigned long long int) var_4)))))) >> (((min((1819389435357565157ULL), (var_1))) - (1819389435357565138ULL)))));
                            var_21 = ((/* implicit */signed char) (unsigned short)10880);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    for (int i_14 = 3; i_14 < 13; i_14 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((int) var_3)) < (((/* implicit */int) var_9))));
                            arr_45 [i_14 + 1] [i_13] [i_12] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) : (8027213296906019183ULL)))) ? (((((/* implicit */int) (signed char)-50)) | (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((signed char) 1819389435357565157ULL)))));
                            var_23 = ((/* implicit */short) ((((((/* implicit */int) (short)2047)) > (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))))))) : (var_6)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 12; i_15 += 2) 
                {
                    for (unsigned short i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) (short)13362)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)64))))));
                            var_25 = ((((/* implicit */unsigned long long int) ((int) (_Bool)1))) | (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) (signed char)107);
                arr_52 [i_7 + 1] = ((/* implicit */signed char) 16627354638351986458ULL);
            }
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4095191539U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127))) : (var_2))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)27533))))));
                    arr_59 [i_7 - 2] [i_7 - 2] [i_17] [i_18] = ((/* implicit */unsigned long long int) (+(1287201354U)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) max((((max((var_2), (((/* implicit */unsigned long long int) (unsigned char)192)))) >> (((max((((/* implicit */unsigned long long int) 2360464287U)), (98393155528001298ULL))) - (98393155528001244ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) | (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))))));
                        arr_63 [i_7] [i_19] [i_17] [i_18] [i_19 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16143)) & (((/* implicit */int) ((min((16627354638351986456ULL), (((/* implicit */unsigned long long int) var_4)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (unsigned char)63)))))))))));
                        arr_64 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)4717)) * (((/* implicit */int) (short)0)))), (((/* implicit */int) ((short) var_5)))))) % (16627354638351986458ULL)));
                        arr_65 [i_7 - 1] [i_17] [i_18] [i_19 - 1] = ((/* implicit */short) var_7);
                        var_29 = ((/* implicit */unsigned short) 10419530776803532432ULL);
                    }
                }
                for (unsigned long long int i_20 = 1; i_20 < 14; i_20 += 2) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8027213296906019186ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3992086011U)))) : (10287804235986542442ULL)));
                    arr_68 [(unsigned char)2] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(min((((14680064U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-18)) + (((/* implicit */int) (_Bool)0)))))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((short) max((9288301027350568302ULL), (((/* implicit */unsigned long long int) 1431822323)))))) >> (((((9ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5))))))))));
                    arr_69 [i_7] [i_7] [i_17] [i_20 - 1] &= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)0));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 1; i_21 < 14; i_21 += 3) 
                {
                    for (unsigned int i_22 = 0; i_22 < 15; i_22 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
                            arr_74 [i_7] [i_7] [i_7] [i_17] [i_21] [i_21] [i_22] |= ((/* implicit */signed char) max((max((var_7), (1819389435357565134ULL))), (((/* implicit */unsigned long long int) ((unsigned short) 2187704257959142386ULL)))));
                        }
                    } 
                } 
                var_33 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56330)) >> (((1934502979U) - (1934502949U)))))) ? (((var_7) >> (((((/* implicit */int) var_3)) + (112))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))))) ? (((((var_1) ^ (var_6))) & (max((var_1), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
            }
            for (short i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_24 = 4; i_24 < 14; i_24 += 1) 
                {
                    for (int i_25 = 0; i_25 < 15; i_25 += 3) 
                    {
                        {
                            arr_84 [i_24] [7ULL] [i_25] = ((/* implicit */unsigned long long int) var_0);
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (signed char)3))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) var_2))));
                            arr_85 [i_24] [i_24] [i_25] = ((/* implicit */signed char) 7309811389780636623ULL);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) ((var_1) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))))));
            }
        }
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
    }
}
