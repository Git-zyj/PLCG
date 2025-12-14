/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161508
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = (unsigned short)0;
                arr_6 [(unsigned char)10] [i_1] = (-(min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)113)), ((unsigned short)50870)))), (((unsigned long long int) (unsigned char)151)))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned long long int) (signed char)81)), (6588259824779815792ULL))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) var_1)), (11ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_6))))), (((/* implicit */unsigned long long int) ((signed char) ((signed char) (unsigned short)5)))))))));
    var_21 = max(((-(((unsigned long long int) (unsigned char)0)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)41834)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18)))) - (((/* implicit */int) ((unsigned short) (unsigned char)119)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9835145024666048291ULL)) ? (9597654872585728931ULL) : (10042581436881560991ULL))) << (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (signed char)85)))) - (34)))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 2] = ((/* implicit */unsigned long long int) ((unsigned short) 11858484248929735830ULL));
            arr_14 [i_2] = ((/* implicit */signed char) ((unsigned char) var_10));
            var_23 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned char)192)))));
        }
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)7)))))));
                    arr_21 [(unsigned short)8] [i_2] [(unsigned short)8] [i_4] = ((/* implicit */signed char) var_13);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) var_19);
                                arr_28 [i_6 + 1] [i_4] [i_6] [i_6] [i_6 - 1] [(unsigned short)2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)11))));
                                var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (130)))));
                                var_27 = ((/* implicit */unsigned char) (unsigned short)51958);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) (unsigned char)14);
                }
            } 
        } 
    }
    for (signed char i_8 = 1; i_8 < 7; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            arr_34 [i_8] [i_9] [i_8] &= ((/* implicit */unsigned long long int) var_12);
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 2) /* same iter space */
            {
                arr_39 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) + (min((((/* implicit */unsigned long long int) var_10)), (0ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) var_11)))))));
                var_29 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 11858484248929735815ULL)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (signed char)127))))));
                arr_40 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned short) var_5)), (var_7))));
            }
            for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 2) /* same iter space */
            {
                var_30 += ((/* implicit */unsigned char) var_12);
                arr_44 [i_8] [i_8] [i_9] [i_11] = (signed char)(-127 - 1);
                var_31 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (((/* implicit */int) min((min((var_13), (((/* implicit */unsigned short) var_17)))), (((/* implicit */unsigned short) min(((unsigned char)76), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))))));
            }
            arr_45 [i_8] = (signed char)(-127 - 1);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                var_32 = ((unsigned char) (signed char)29);
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((unsigned char) 5439474346400908811ULL)))));
                arr_48 [i_8 + 4] [i_9] [i_12] [i_12] |= ((/* implicit */unsigned long long int) (unsigned short)8192);
            }
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (min((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) (signed char)-68))))), (max((var_19), (((/* implicit */unsigned long long int) (signed char)-126))))))));
        }
        arr_49 [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((signed char)105), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)222)) <= (((/* implicit */int) (unsigned char)217))))))))));
    }
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
    {
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            {
                arr_56 [i_13] [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)127))));
                var_35 = ((/* implicit */signed char) var_19);
                /* LoopSeq 3 */
                for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    var_36 = ((/* implicit */unsigned char) ((min((max((((/* implicit */unsigned long long int) (signed char)31)), (4374705998398513496ULL))), (14072038075311038129ULL))) >> (((((/* implicit */int) var_0)) - (188)))));
                    arr_59 [i_13] [i_14] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)180)), (10332711984650142481ULL))));
                }
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) (unsigned char)71)), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))))))), (((/* implicit */unsigned long long int) min(((unsigned short)65535), (var_1))))));
                    arr_64 [(unsigned short)6] [i_13] = min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) 0ULL)));
                }
                for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) /* same iter space */
                {
                    arr_68 [i_13] = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) (unsigned short)22886)), (5311832960394802867ULL))), (((/* implicit */unsigned long long int) (unsigned char)210)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) < (((/* implicit */int) (unsigned short)0)))))) - (0ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_18 = 4; i_18 < 16; i_18 += 2) /* same iter space */
                    {
                        var_38 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                        arr_72 [i_13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_73 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)227))));
                    }
                    for (signed char i_19 = 4; i_19 < 16; i_19 += 2) /* same iter space */
                    {
                        arr_76 [(unsigned char)16] [i_14] [i_17] [i_13] = ((/* implicit */unsigned long long int) (signed char)127);
                        var_39 = ((/* implicit */unsigned short) ((min((min((17768660623825962056ULL), (((/* implicit */unsigned long long int) (unsigned char)110)))), (((/* implicit */unsigned long long int) (unsigned char)211)))) >> (((((/* implicit */int) max((((unsigned short) 10332711984650142481ULL)), (((unsigned short) var_19))))) - (60425)))));
                        arr_77 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) min((var_18), (var_4)));
                    }
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 10ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)225)), ((unsigned short)7168)))) ? (((((/* implicit */int) (unsigned short)48630)) * (((/* implicit */int) (unsigned short)16905)))) : (((/* implicit */int) (unsigned short)16906))))) : ((-(14521446341785947982ULL)))));
                }
            }
        } 
    } 
}
