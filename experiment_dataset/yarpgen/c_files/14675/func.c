/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14675
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((1722548483U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83)))))) != (var_11)));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((int) (_Bool)1)))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) >= (((unsigned int) 750839244))))));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-57))));
            var_21 += ((/* implicit */unsigned int) var_3);
            arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (signed char)-60);
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((signed char) var_9));
            var_23 = ((/* implicit */int) (-(arr_1 [i_0])));
            var_24 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (262143) : (((/* implicit */int) (signed char)-20)))) >> (((((int) var_8)) - (20)))));
        }
        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned char i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_25 ^= ((/* implicit */int) var_13);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)-123))) - (((int) var_11))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */int) (signed char)-60);
            var_28 = ((/* implicit */signed char) max((var_28), (var_6)));
        }
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (signed char)79))));
        arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((13723949499994029318ULL) >> (((arr_13 [i_0]) + (685141650))))) : (((((/* implicit */unsigned long long int) var_11)) | (1603448238998542256ULL)))));
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */short) var_10);
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((long long int) var_5)))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
    {
        var_31 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 3758096384U)) : (7180377364265519609ULL)))));
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((11266366709444032020ULL) < (((/* implicit */unsigned long long int) 0U)))))));
        arr_31 [i_9] = ((/* implicit */unsigned short) var_1);
        arr_32 [i_9] [i_9] = ((/* implicit */int) var_16);
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] = ((/* implicit */unsigned long long int) var_15);
        /* LoopSeq 2 */
        for (short i_11 = 2; i_11 < 9; i_11 += 4) 
        {
            var_33 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (arr_18 [i_10] [i_11]));
            var_34 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 4) 
                    {
                        {
                            arr_46 [i_10] [i_10] [(short)10] [(signed char)6] [i_13] [i_13] [i_14 - 2] = ((/* implicit */_Bool) (~(7180377364265519628ULL)));
                            var_35 = ((/* implicit */signed char) ((var_12) >> (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_14)))))));
                            arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) (((+(-3749202503635457585LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) != (3552859493U)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)123)) | (((/* implicit */int) var_4))))));
            var_37 = ((/* implicit */unsigned long long int) ((var_12) == (((/* implicit */long long int) 3150953487U))));
        }
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_9))))))));
    }
    var_39 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)50)) ? (7180377364265519628ULL) : (((/* implicit */unsigned long long int) 10U))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 3) 
    {
        var_40 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14121)) ^ (var_3)))) : (((((/* implicit */unsigned long long int) var_12)) | (7180377364265519614ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_16] [i_16]))) / (min((var_9), (((/* implicit */unsigned long long int) var_7))))))));
        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((int) (signed char)-61))) ? (((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) (signed char)79)))))) : (((/* implicit */int) (unsigned short)14121)))))));
        arr_53 [i_16] = ((/* implicit */int) ((((var_2) << (((3552859493U) - (3552859483U))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-64)))))));
        arr_54 [i_16] [i_16] = ((/* implicit */short) max((min((-6721285847300072573LL), (((/* implicit */long long int) (signed char)63)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)10499)))))));
    }
    for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        arr_57 [i_17] = ((/* implicit */unsigned short) (!(((((/* implicit */int) ((7180377364265519628ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_17])))))) > (((((/* implicit */_Bool) -373843436)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_15))))))));
        arr_58 [4LL] [i_17] = ((/* implicit */unsigned int) (!(((((unsigned long long int) (short)-18102)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)102))))))))));
        var_42 = ((/* implicit */unsigned long long int) var_14);
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            for (int i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                {
                    arr_65 [(unsigned char)4] [i_18] [i_18] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) (((_Bool)1) ? (((/* implicit */int) (short)18866)) : (arr_60 [i_18]))))) < (var_9)));
                    var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) (+(var_0)))))) + (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    }
    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) 
    {
        var_44 += ((/* implicit */short) (~(((/* implicit */int) (short)-18097))));
        /* LoopNest 3 */
        for (long long int i_21 = 2; i_21 < 12; i_21 += 2) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                for (short i_23 = 0; i_23 < 14; i_23 += 4) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (unsigned short)13386)) ? (((/* implicit */unsigned int) 1084457243)) : (var_2))))));
                        var_46 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_21 - 2] [i_21 - 2]))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) - (0ULL))))) ? (((/* implicit */unsigned long long int) (-(475310457)))) : (((max((18446744073709551609ULL), (((/* implicit */unsigned long long int) var_16)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_23] [i_21 + 2] [i_21 - 1])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 14; i_24 += 3) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 1) 
            {
                {
                    arr_80 [i_24] [i_24] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-120)))) <= (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (short)16247))))))))));
                    arr_81 [i_24] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_4)))))) & ((+(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (int i_26 = 0; i_26 < 22; i_26 += 4) 
    {
        arr_84 [i_26] = min((min((((unsigned long long int) (signed char)58)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)51415))))))), (((/* implicit */unsigned long long int) -19209149)));
        arr_85 [i_26] [i_26] = ((/* implicit */_Bool) max((((int) 16173620400125054605ULL)), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_1)))))));
        var_47 = ((/* implicit */unsigned long long int) ((((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_15)) : (var_3))) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) var_8)), (11712246132078421264ULL))) - (10ULL))))) << ((-(((((/* implicit */long long int) ((/* implicit */int) var_15))) & (var_11)))))));
    }
}
