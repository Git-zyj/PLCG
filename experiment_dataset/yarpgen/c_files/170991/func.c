/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170991
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
    var_19 = ((/* implicit */signed char) ((((((var_16) / (((/* implicit */long long int) var_1)))) >= (((/* implicit */long long int) var_11)))) ? (max((((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */unsigned int) var_11))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)60)))))));
    var_20 = ((/* implicit */unsigned int) min((18702040547413567ULL), (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_17)), (3324381679U))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_9)))) ? (((/* implicit */int) ((arr_0 [i_0]) > (arr_0 [i_0])))) : (min((((/* implicit */int) ((unsigned char) 3324381684U))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_10))))))));
        var_22 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_2 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_8)))) <= (max((((/* implicit */int) var_3)), (arr_0 [i_0]))))))) / (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */long long int) arr_0 [i_0])) & (var_5))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (932146251U) : (1843232244U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_5 [15ULL])))))));
        arr_6 [i_1] = ((unsigned long long int) (unsigned char)60);
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_18 [i_3] [i_3] [i_2] [i_3 + 2]))))));
                        arr_20 [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) var_5);
                        var_24 = ((/* implicit */long long int) var_3);
                        arr_21 [i_2] [i_3] [i_4] [i_5] = max((((((18702040547413578ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) + (((/* implicit */unsigned long long int) min((var_2), (var_16)))))), (((/* implicit */unsigned long long int) (((-(var_9))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_2]) >= (((/* implicit */int) arr_12 [i_2] [i_2]))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (-(((int) ((((/* implicit */int) arr_10 [i_6] [(unsigned short)12])) << (((var_11) - (1017594604))))))));
                            arr_34 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)140)) : (-1689485132))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) -862855338298312001LL)) ? (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]) : (var_6)))))));
                            arr_35 [i_2] [i_2] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned long long int) 0);
                            var_26 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) arr_1 [i_6]);
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16696)))), (((((/* implicit */_Bool) 3324381671U)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129)))))))) ? (max((17321850129151927592ULL), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (unsigned char)123))))))) : (((/* implicit */unsigned long long int) arr_26 [i_2] [i_2] [i_6] [9]))));
        }
        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) var_13);
                            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_10] [i_10]))) > (((((/* implicit */_Bool) max((((/* implicit */long long int) 970585612U)), (2047LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (-3474543682599850365LL)))) : (arr_37 [i_2] [i_11] [i_12])))));
                            arr_47 [i_2] [i_10] [i_11] [i_11] [i_12] [i_2] [i_13] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (+(arr_33 [i_11])))) ? (((/* implicit */long long int) var_1)) : (max((((/* implicit */long long int) arr_24 [i_2])), (-4348469893949806583LL))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) ((unsigned int) (-9223372036854775807LL - 1LL)));
            arr_48 [i_2] [i_10] = ((/* implicit */signed char) arr_29 [i_2] [8LL] [(unsigned short)3] [i_2]);
            arr_49 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_29 [i_2] [i_2] [i_2] [i_10]) : (((/* implicit */long long int) (-(-1165512145))))))), (((((((/* implicit */unsigned long long int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_10])) - (1124893944557624023ULL))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_23 [i_2] [i_2] [i_2])), (var_4))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            var_32 = ((/* implicit */int) var_8);
            arr_52 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((min((((long long int) (signed char)117)), (((/* implicit */long long int) ((((/* implicit */_Bool) 475746906)) ? (((/* implicit */int) (unsigned char)138)) : (-966437521)))))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(var_18))))))));
        }
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (-2048LL) : (((/* implicit */long long int) 3324381682U))));
        var_34 = min((17733907691150887136ULL), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])));
        arr_53 [i_2] = ((/* implicit */int) ((unsigned short) var_14));
    }
    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)12)) ? (min((((/* implicit */unsigned long long int) ((int) 5626406148818548243ULL))), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17321850129151927590ULL))))))));
                    var_36 = ((((((((/* implicit */_Bool) var_18)) ? (var_16) : (((/* implicit */long long int) 3324381684U)))) * (((/* implicit */long long int) ((-533044529) / (-1507816671)))))) ^ (((/* implicit */long long int) min((1399662792U), (((/* implicit */unsigned int) 1838120907))))));
                }
            } 
        } 
        arr_64 [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(arr_16 [i_15] [i_15] [i_15] [i_15])))) ? (((((/* implicit */_Bool) (unsigned short)13738)) ? (((/* implicit */unsigned long long int) var_7)) : (17733907691150887139ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_60 [i_15])) != (-2061LL))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_15])) && (((/* implicit */_Bool) arr_27 [i_15] [i_15] [10ULL] [i_15]))))))));
        var_37 = ((/* implicit */long long int) ((((int) var_5)) > (((/* implicit */int) ((arr_8 [i_15]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_15] [i_15] [(unsigned short)4] [i_15]))))))));
        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_37 [i_15] [(unsigned char)5] [i_15]))) + ((~(var_7)))));
    }
    var_39 = ((int) var_7);
}
