/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148479
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (((((/* implicit */long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10)))))) - (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3389259646563460607LL) : (9223372036854775801LL)))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4590341951608146383LL), (9223372036854775778LL)))) && (((/* implicit */_Bool) var_1))));
    var_15 = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */unsigned long long int) var_9)) < (10252465233406371495ULL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = arr_0 [i_1];
                    arr_7 [i_0] [i_1 - 3] [15ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? ((-(3627619300U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (var_10)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11)) & (((/* implicit */int) arr_0 [i_0]))))) ? ((+(var_8))) : ((-(((/* implicit */int) (unsigned short)65535))))));
        var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_5))) << (((arr_6 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3 - 1] = ((/* implicit */signed char) 3757301021U);
                    arr_17 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) arr_5 [i_3 - 1] [i_4] [i_4 - 1] [(signed char)1]))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (1123484320255911468ULL)))));
                    var_20 = ((/* implicit */int) min((min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_0))), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)111)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (8194278840303180093ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_22 = ((unsigned char) max((((9978715114977159735ULL) * (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_7))));
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)85)))))))) ^ (max((((/* implicit */unsigned long long int) ((var_2) == (((/* implicit */unsigned long long int) 4043307252U))))), (((((/* implicit */_Bool) var_2)) ? (8468028958732391879ULL) : (var_10)))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (short i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                {
                    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((var_10) >= (((/* implicit */unsigned long long int) -27051944080419317LL)))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) min((((/* implicit */signed char) var_3)), (var_7))))))) ? (((/* implicit */int) ((unsigned char) min(((unsigned char)194), (((/* implicit */unsigned char) var_3)))))) : (((/* implicit */int) arr_18 [i_8]))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 2; i_9 < 14; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)194)))))) ^ ((-(var_12)))))));
                        var_26 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) -1662319676)) ? (((/* implicit */unsigned long long int) arr_28 [i_6] [i_7] [i_6] [i_9 - 1])) : (8749185450803685364ULL))))) - (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)10)), (((int) (short)2989)))))));
                        arr_29 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) arr_27 [i_9 + 3] [i_8] [i_7] [i_6]))) : (((((/* implicit */int) (unsigned char)189)) << (((var_0) - (3981640412U)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-23694))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 593279315))))), ((+(var_9)))))));
                        var_27 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                    }
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << ((((~((~(((/* implicit */int) arr_0 [i_8])))))) + (131)))));
                        arr_32 [i_6] [i_7] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) - (max((((8468028958732391895ULL) * (var_2))), (((/* implicit */unsigned long long int) ((1222572699U) * (((/* implicit */unsigned int) 317258959)))))))));
                    }
                    var_29 = ((/* implicit */short) min((((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) ^ (9978715114977159697ULL))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_31 [i_6] [i_6 - 1] [i_7] [i_7] [i_6] [i_11 - 1])), (var_0))), (((/* implicit */unsigned int) (_Bool)0))));
                        arr_35 [i_6] [i_6] [i_6 - 1] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-73))));
                        var_31 += arr_20 [i_11 - 1];
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            var_32 = (unsigned char)118;
                            arr_39 [i_6] [i_6] [i_6] [i_6] [14ULL] [i_6] [7LL] = ((/* implicit */short) (!(((/* implicit */_Bool) 12444309474598988263ULL))));
                            var_33 = -6964304546633563822LL;
                            arr_40 [i_6 - 1] [i_7] [i_8 - 2] [i_6] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_37 [i_12] [i_12] [i_11] [i_8] [i_7] [(signed char)14])), (27051944080419317LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) var_7)))))))), (9507959236391532637ULL)));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (-(((/* implicit */int) min(((unsigned char)207), (((/* implicit */unsigned char) max(((signed char)-60), (var_7))))))))))));
                        }
                        for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                        {
                            var_35 &= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (signed char)-65)))), (((((/* implicit */int) var_3)) << (((min((((/* implicit */unsigned long long int) var_5)), (9978715114977159736ULL))) - (9978715114977159729ULL)))))));
                            var_36 -= ((/* implicit */unsigned long long int) max((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) != (1881367697U)))), (((/* implicit */long long int) max((4294967295U), (1881367711U))))));
                        }
                    }
                    var_37 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-3720)) == (((/* implicit */int) (signed char)-38)))) && (((/* implicit */_Bool) arr_42 [i_8] [i_6] [(short)10] [i_6 - 1] [i_6] [i_6]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)18)) * (((/* implicit */int) (short)-23694))))) * (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
        arr_47 [i_14] [i_14] = ((/* implicit */signed char) var_8);
    }
    var_39 *= var_9;
}
